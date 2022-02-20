#include <stdio.h>

void ModeUsage(){
    fprintf(stderr,"Usage:\n");
    fprintf(stderr,"    mycc -mode [options] infile\n\n");
    fprintf(stderr,"Valid modes:\n");
    fprintf(stderr,"    -v: Version information only\n    -1: Part 1 (not yet implemented)\n    -2: Part 2 (not yet implemented)\n    -3: Part 3 (not yet implemented)\n    -4: Part 4 (not yet implemented)\n    -5: Part 5 (not yet implemented)\n\n");
    fprintf(stderr,"Valid options:\n");
    fprintf(stderr,"    -o outfile: write to outfile instead of standard output\n");
}
