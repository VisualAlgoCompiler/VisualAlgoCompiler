#include <stdio.h>
#include <string.h>

void ModeUsage();
void ModeVersion();
void lexer_initNodes();
void setFilename(char * file);
void lexer_scanner();

void createNewToken(char *content, int type, int line);
void toStringTokens();

int main(int argc, char *argv[]) {
    // lexer_initNodes();
    // createNewToken("abcde", 1, 0);
    // createNewToken("bbcde", 1, 0);
    // createNewToken("cccde", 1, 0);
    // toStringTokens();
    char *filename;
    if (argc==2 && (strcmp("-V",argv[1])==0 || strcmp("--version",argv[1])==0)){
        ModeVersion();
    } else if (strcmp("-L",argv[1])==0 || strcmp("-lexer",argv[1])==0){
        if (argc==3) {
          filename=argv[2];
          printf("%s\n", filename);
          setFilename(filename);
          lexer_initNodes();
          // BraMappingError();
          // printNodeLink();
          // printErrorLink();
          // close();
        } else {
          fprintf(stderr,"You missed the filename, please input the filename for lexer to process");
        }
    } else {
        ModeUsage();
    }
    return 0;
}
