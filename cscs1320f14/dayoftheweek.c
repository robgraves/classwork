/**************************************************
 * Matthew Page
 * CSCS 1320 Fall 2014
 * 09/23/2014
 *
 * dayoftheweek.c - a program that calculates the
 *                  day of the week that January
 *                  first falls on depending on
 *                  what year it is (assuming the
 *                  21st century) and takign into
 *                  account leap years.
 *
 *************************************************/

#include <stdio.h>

int main()    
{
    //variable declarations and initializations
    int year, trunc, twfvpct, step3, index;
    year = trunc = twfvpct = step3 = index = 0;
    char weekday[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    //prompt user for year
    printf("Which year: ");
    scanf("%d", &year);
    
    //mental math trick
    trunc = (year%100);
    twfvpct = ((trunc/2)/2);
    if (trunc%4 == 0)   //if statement accounting for leap years.
    {                   
        twfvpct = (twfvpct - 1);
    }
    step3 = (trunc+twfvpct);
    index = (step3%7);

    //output the day of the week given year falls on
    printf("January 1st, %d falls on: %s\n", year, weekday[index]);

    //system("cal");  //works but not enough info, need to pass year to it
    //char argyear[8];
    //sprintf(argyear, "%d", year); 
    //system("cal 01 %s\n" , &argyear); //the idea of what I want to do, but doesn't work

    return(0);
}
