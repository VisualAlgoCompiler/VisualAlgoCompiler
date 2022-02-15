#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include "tokens.h"

using namespace std;

const char * key[] = {"auto","double",
                      "enum","extern","goto","long","register",
                      "short","signed","sizeof","static","typedef",
                      "union","unsigned","volatile"};

// Count for the parentheses, it have to match
int leftSmall = 0;
int rightSmall = 0;
int leftMiddle = 0;
int rightMiddle = 0;
int leftBig = 0;
int rightBig = 0;

int lineBra[6][1000] = {0};
char *filename;
