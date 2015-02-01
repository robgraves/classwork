/*******************************************************
 * Matthew Page
 * CSCS1320 Fall 2014 
 * 09/23/2014
 *
 * sizes.c -    a program that calculates and displays
 *              the sizes of certain datatypes.
 *
 *
 *
 *
 *
 * ***************************************************/

#include <stdio.h>

int main()
{
    printf("A char is %ld bytes.\n", sizeof(char));
    printf("A short int is %ld bytes.\n", sizeof(short int));
    printf("A int is %ld bytes.\n", sizeof(int));
    printf("A long int is %ld bytes.\n", sizeof(long int));
    printf("A long long in is %ld bytes.\n", sizeof(long long int));

    return(0);
}
