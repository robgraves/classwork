/**************************************************
 *
 * Matthew Page
 * 09/25/2014
 * CSCS1320 Fall 2014
 *
 * numberfun7.c -   this program does something
 *
 * ***********************************************/

#include <stdio.h>

int main()
{
    unsigned short int a=0;
    signed short int b=0;

    printf("Before, a is %hd\n", a);
    printf("Before, b is %hd\n", b);

    a=a-1;
    b=b-1;

    printf("-1, a is %hu\n", a);
    printf("-1, b is %hu\n", b);

    a=a|0xFFFF;
    //b=b|0xFFFF;

    a=a&0x7FFF;
    
    printf("Max positive signed value is: %hd\n", a);

    return (0);
}
