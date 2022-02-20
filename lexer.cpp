#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include "lexer.h"

using namespace std;

// Count for the parentheses, it have to match
int left_small = 0;
int right_small = 0;
int left_middle = 0;
int right_middle = 0;
int left_big = 0;
int right_big = 0;

char * filename;

// Linked list of lex nodes
class LexNode
{
    public:
        LexNode(char content[], int type, int line, LexNode * next, bool token_or_node);
        bool is_token_or_node();

        LexNode * l_next;
        int l_type;
        int l_line;
        bool l_token_or_node;
        char l_content[];
};

LexNode::LexNode(char content[], int type, int line, LexNode * next, bool token_or_node)
{
    strcpy(l_content, content);
    l_type = type;
    l_line = line;
    l_next = next;
    l_token_or_node = token_or_node;
}

LexNode * first_token_head;
LexNode * first_error_head;
LexNode * current_token_head;
LexNode * current_error_head;

void lexer_initNodes()
{
    first_token_head = new LexNode("", -1, -1, NULL, true);
    first_error_head = new LexNode("", -1, -1, NULL, false);
    current_token_head = first_token_head;
    current_error_head = first_error_head;
}

void lexer_close()
{
    delete first_token_head;
    delete first_error_head;
    delete current_token_head;
    delete current_error_head;
}

void setFilename(char * file)
{
    filename = file;
}

void createNewToken(char *content, int type, int line)
{
    LexNode * p = current_token_head;
    LexNode *temp_token = new LexNode(content, type, line, NULL, true);
    p->l_next = temp_token;
    current_token_head = temp_token;
}

void toStringTokens()
{
    LexNode * p = first_token_head->l_next;
    while(p!=NULL)
    {
        // "File "<<filename<<
        cout<<"\t"<<"Line "<<p->l_line<<"\t"<<"Token "<<p->l_type<<"\t"<<"Text "<<p->l_content<<endl;
        p = p->l_next;
    }
    cout<<endl<<endl;
}

void lexer_scanner()
{
    char ch;
    char * array;
    char * word;
    int i = 0;
    int line = 1;

    FILE * infile;
    infile = fopen(filename,"r");
    if(!infile)
    {
        printf("Cannot open file\n");
        return;
    }

    ch = fgetc(infile);
    while(ch!=EOF)
    {
        i = 0;
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || ch == '_')
        {
            array[i++] = ch;
            ch = fgetc(infile);
        }
    }
}
