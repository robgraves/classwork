/* Matthew Page 
 * CSCS 1320 Fall 2014
 *
 * odometer2.c - rollover 2 digits
 *              like an odometer in 
 *              a car.
 *
 *              Revised to contain 6
 *              digits and rollover
 *              from 999999 to 000000
 *              but using nested if
 *              statements, trying to
 *              find alternate means
 *              of accomplishing this.
 *
 *              attempting to shorten up 
 *              and simplify this code 
 *              with odometer2.c
 *              
 * */

#include <stdio.h>
#define MAX 6

int main()
{
	int i, input, j, number[MAX];
    for (i=0;i<MAX;i++)
    {
        number[i]=0;
    }
	printf("How much to count?");
	scanf("%d", &input);
	for(i=0;i<input;i=i+1)    
	{
		number[MAX-1]=number[MAX-1]+1; // this line does the counting in the ones place 
        for (j=1;j<MAX;j++)
        {   
		    if (number[MAX-j]>9)
		    {
			    number[MAX-j]=0;
			    number[MAX-(j+1)]=number[MAX-(j+1)]+1;
            }
            //s--;
        }
        if (number[0]>9)
        {
            number[0] = 0;
        }
    for (j=0;j<MAX;j++)
        printf("%d ", number[j]);
	//printf("%d %d %d %d %d %d\n", number[0], number[1], number[2], number[3], number[4], number[5]);
    printf("\n");
	}
	return (0);
}
