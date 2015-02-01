/* Matthew Page 09/09/2014
 * CSCS1320 Fall 2014
 *
 * datatypes.c -    program that takes user input for four
 *                  test scores and then finds and outputs
 *                  the average of those test scores.
 *
 * */

#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    float avg;

    printf("Enter score 1: ");
    scanf("%d", &a);
    printf("Enter score 2: ");
    scanf("%d", &b);
    printf("Enter score 3: ");
    scanf("%d", &c);
    printf("Enter score 4: ");
    scanf("%d", &d);
    
    avg = (float)(a+b+c+d)/4;

    printf("The average of  %d, %d, %d, %d, is: %.2f\n",a,b,c,d,avg);
    
    return (0);
}
