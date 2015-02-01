/***********************************************
 *
 *  Matthew Page
 *  CSCS1320 Fall 2014
 *  09/30/2014
 *
 *  clargs.c -  command line arguments 
 *              called clargs.c   
 *
 *
 * ********************************************/

#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    printf("You called %s with %d arguments\n", argv[0], argc-1);
    printf("Argument breakdown as follows:\n");
    for (i=0;i<argc;i++)
        printf("argv[%d]: %s\n", i, argv[i]);
    return (0);
}
