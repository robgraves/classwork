/*************************************************
 *
 *  Matthew Page
 *  CSCS1320 Fal 2014
 *  10/02/2014
 *
 *  functionfun.c - Having fun with functions in    
 *                  the C programming language.
 *
 ************************************************/ 

#include <stdio.h>
#include <stdlib.h>

int sum(int *, int);

float average(int, int);

int main()
{
    int highest(int *, int);
    int lowest(int *, int);
    int num =4;
    int scores=[num];
    int i, total=0;
    float avg;
    for (i=0;i<num;i++)
    {
        printf("Enter score %d: ", i);
        scanf("%d", &scores[i];
    }
    total = sum(scores, num);
    avg = average(total, num);
    high = highest(scores, num);
    low = lowest(scores, num);
    printf("The total is %d\n", total);
    printf("The average is %f\n", avg);
    printf("The highest is %d\n", high);
    printf("The lowest is %d\n", low);
    return (0);
}

int sum(int *arr, int n)
{
    int i, result=0;
    for (i=0;i<n;i++)
    {
        result = result+arr[i];
    }
    return result;
}

float average(int total, int number)
{
    float result=0.0;
    result = (total/number);
    return result;
}

int highest(int *arr, int n)
{

}

int lowest(int *arr, int n)
{

}
