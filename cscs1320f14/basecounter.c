/****************************************************
 * Matthew Page
 *
 * CSCS 1320 Fall 2014  
 *
 * basecounter.c -  a program that prompts the user
 *                  for the number base to be used
 *                  and then asks for a number to 
 *                  to count to and displays numbers
 *                  in an odometer like fashion, but
 *                  with any number base 2 through 10
 *
 * *************************************************/

#include <stdio.h>
#define MAX 8       // a one stop defined MAX to change number of digits

int main()
{
    int base, i, input, number[MAX],j;  // declaring variables
    for (i=0;i<MAX;i++)     // loop intializing the array
    {
        number[i]=0;  // initialized array
    }
    printf("What base? (2-10): ");  // user input
    scanf("%d", &base);             
    printf("How much to count? ");  
    scanf("%d", &input);
    for (i=0;i<input;i++)   // outer loop start
    {
        number[MAX-1]=number[MAX-1]+1;
        for(j=1;j<MAX;j++)              // inner loop start
        {
            if (number[MAX-j]>(base-1))
            {
                number[MAX-j]=0;        // sets current digit to 0 if exceed base limit
                number[MAX-(j+1)]++;    // increments the next digit over (carrying) after above occurs 
            }
        }                               // inner loop end
        if (number[0]>(base-1))
        {                               // this if statemen allows the program
            number[0] = 0;              // to rollover for example if base 10,
        }                               // from 9999 to 0000 on given 10000
    for (j=0;j<MAX;j++)             // print loop
        printf("%d ", number[j]);   // print loop
    printf("\n");
    }                       //outer loop end
    return (0);
}
