#include <stdio.h>
#include <string.h>

void Usage(){
    fprintf(stderr,"Usage:\n");
    fprintf(stderr,"    mycc -mode [options] infile\n\n");
    fprintf(stderr,"Valid modes:\n");
    fprintf(stderr,"    -v: Version information only\n    -1: Part 1 (not yet implemented)\n    -2: Part 2 (not yet implemented)\n    -3: Part 3 (not yet implemented)\n    -4: Part 4 (not yet implemented)\n    -5: Part 5 (not yet implemented)\n\n");
    fprintf(stderr,"Valid options:\n");
    fprintf(stderr,"    -o outfile: write to outfile instead of standard output\n");
}

void Mode0(){
    fprintf(stdout,"Welcome to VisualAlgo\n    Written by Pinhao Wang (wwwpa0620@gmail.com) and Zizheng Yang (zizhengyang5555@gmail.com)\n    Version 1.0.0\n    27 January, 2022\n");
}

int main(int argc, char *argv[]) {
    if(argc==2 && strcmp("-v",argv[1])==0){
        Mode0();
    }else if(argc==4 && strcmp("-0",argv[1])==0 && strcmp("-o",argv[2])==0){
        FILE *fp;
        char *filename;
        filename=argv[3];
        fp= fopen(filename,"w");
        fprintf(fp,"Welcome to VisualAlgo\n    Written by Pinhao Wang (wwwpa0620@gmail.com) and Zizheng Yang (zizhengyang5555@gmail.com)\n    Version 1.0.0\n    27 January, 2022\n");
        fclose(fp);
    }else{
        Usage();
    }
    return 0;
}
