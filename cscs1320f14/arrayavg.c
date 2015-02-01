/* Matthew Page
 * CSCS 1320 Fall 2014
 *
 * arrayavg.c - takes user input for 4 test scores and
 *              calculates the average but instead of using
 *              4 integers it uses and integer array.
 *
 * */

#include <stdio.h>

int main()
{
    float avg=0;
    int max = 4;
    int score[max], count=0;

    for (count=0;count<max;count=count+1)
    {
        printf("Enter score %d: ",(count+1));    //maths! zOMG!
        scanf("%d", &score[count]);
        avg = avg + score[count];
    }
    avg = avg/count;
    printf("The average is: %.2f\n", avg);
    return (0);
}
