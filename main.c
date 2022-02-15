#include <stdio.h>
#include <string.h>

void ModeUsage(){
    fprintf(stderr,"Usage:\n");
    fprintf(stderr,"    mycc -mode [options] infile\n\n");
    fprintf(stderr,"Valid modes:\n");
    fprintf(stderr,"    -v: Version information only\n    -1: Part 1 (not yet implemented)\n    -2: Part 2 (not yet implemented)\n    -3: Part 3 (not yet implemented)\n    -4: Part 4 (not yet implemented)\n    -5: Part 5 (not yet implemented)\n\n");
    fprintf(stderr,"Valid options:\n");
    fprintf(stderr,"    -o outfile: write to outfile instead of standard output\n");
}

void ModeVersion(){
    fprintf(stdout,"Welcome to VisualAlgo\n    Written by Pinhao Wang (wwwpa0620@gmail.com) and Zizheng Yang (zizhengyang5555@gmail.com)\n    Version 1.0.0\n    27 January, 2022\n");
}

int main(int argc, char *argv[]) {
    char *filename;
    if (argc==2 && (strcmp("-V",argv[1])==0 || strcmp("--version",argv[1])==0)){
        ModeVersion();
    } else if (strcmp("-L",argv[1])==0 || strcmp("-lexer",argv[1])==0){
        if (argc==3) {
          filename=argv[2];
          printf("%s\n", filename);
          // initNode();
          // scanner();
          // BraMappingError();
          // printNodeLink();
          // printErrorLink();
          // close();
        } else {fprintf(stderr,"You missed the filename, please input the filename for lexer to process");}
    } else {
        ModeUsage();
    }
    return 0;
}
