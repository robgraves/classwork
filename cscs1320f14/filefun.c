/*************************************************
 *
 * Matthew Page
 * 10/28/2014
 * CSCS 1320 
 * Fall 2014
 *
 * filefun.c -  something goes here
 *
 * **********************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int i;
    int count=0;
    FILE *fptr;
    fptr=fopen("nothing.dat", "r");
    if(fptr==NULL)
    {
        fprintf(stdout, "Error opening file!\n");
        exit(1);
    }
    //for(i=0;i<5;i++)
    while((c=fgetc(fptr))!=EOF)
    {
        //c=fgetc(fptr);
        fprintf(stdout, "I just read a '%c'\n", c);
    }
    fclose(fptr);
    return(0);
}
