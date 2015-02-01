/**************************************************
 *
 * Matthew Page 
 * 09/26/2014
 * CSCS1320 Fall 2014
 *
 * decimal2binary.c -   a program to convert a 
 *                      decimal number into a binary
 *                      number.
 *
 *************************************************/

#include <stdio.h>
#include <math.h>     //if using pow() function

int power(int base, int expo);

int main()
{
    //variable declarations and initializations
    int input,i;
    input = i = 0;
    //int test=128;
    //int bit[8]={0};
    int b=16;           //current bit count
    int test=(int)pow((double)2.0, (double)(b-1));
    //int test=32768;     //this changes in relation to bitcount (for 16 bits)
    //int test=128;     //this changes in relation to bitcount (for 8 bits)
    
    //testing
    //double something;
    //something=pow(2.0, (double)b);
    //printf("%f", something);

    int bit[b];

    //user prompt and get initial value
    printf("Enter decimal value : ");
    scanf("%d", &input);

    //repeat user input and start of output
    printf("You said: %d\n", input);
    printf("In binary is: ");

    //while loop constructed from previous revison
    //of this file.
    while (i<(b-1))                 //while loop start
    {
        if (input>=test)        //if statement choice start
        {
            bit[i]=1;           //set bit of current index/iteration to 1
            input=(input-test); //subtract that test value from user input
        }
        else                    //else statement
        {
            bit[i]=0;           //set bit of current index/iteration to 0
        }
        test=(test/2);          //set test value to half of current test
        printf("%d", bit[i]);   //print the bit value of the current iteration/index
        i++;                    //increment my iteration/index
    }

    if (input>=test)            //test for final bit value
    {
        bit[(b-1)]=1;               //set final (rightmost) bit value to 1 if 1
    }
    else                        //else statement
    {
        bit[(b-1)]=0;               //set final (rightmost) bit value to 0 if 0
    }
    printf("%d\n", bit[(b-1)]);     //print out final bit


    return 0;
}
