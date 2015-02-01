/***************************************************
 *
 * Matthew Page
 * 
 * 12/2/2014
 * CSCS1320 
 *
 * eoce 0x0.c - End of Course Experience, 0x0.c is
 *              a program that outouts four numbers
 *              in fibonacci sequence on at least 8
 *              lines, 8 digits per number, 4 spaces
 *              between each.
 *
 **************************************************/
#include <stdio.h>
#define LOOPS 9         //define LOOPS for number of
                        //of iterations
int main()
{
    //variable declarations and initial assignments
    int counter=0;
    int a=0;
    int b=1;
    int c=0;
    int d=0;

    //while loop that calculates the fibonacci sequence
    while (counter<LOOPS)
    {
        printf("%12.8d", a);
        printf("%12.8d", b);
        c=a+b;
        printf("%12.8d", c);
        d=b+c;
        printf("%12.8d", d);
        a=d+c;
        b=a+d;
        printf("\n");
        counter=counter+1;
    }

    return(0);
}
