/************************************************
 *  Matthew Page 09/21/2014
 *  CSCS1320 Fall 2014
 *
 *  random.c -  initially to get some random
 *              number generated, then evolved 
 *              into it's real purpose:
 *
 *  diceroll.c -simulate the roll of six sided
 *              dice for future use.
 *
 * *********************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice();

int main()
{
    int x, y;
    x = y = 0;

    x = dice();    //calling dice function for first die
    sleep(2);       //needed a delay, because it was based on time, without this both die show same #
    y = dice();    //calling dice function for second die
    printf("%d %d\n", x, y);    //print resulting 2 dice rolls

    return (0);
}

int dice()             //my dice function
{
    int z;
    srand(time(NULL));  //using time to try to get a random number
    z = rand();         //random number assigned to variable z
    z = ((z%6)+1);      //the above results in random numbers, I did modulus 6 then +1 to get 1 through 6
    return z;           //returning the integer (should be 1 through 6)
}
