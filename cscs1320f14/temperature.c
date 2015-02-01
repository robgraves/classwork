/************************************************
 *  Matthew Page 09/20/2014
 *  CSCS1320 Fall 2014
 *
 *  Created for Derek Southard's ghost_team_a/c
 *  repository. (We need some code in there).
 *  
 *  temperature.c - A program that asks user if
 *                  they want to convert from 
 *                  fahrenheit to celsius or
 *                  from celsius to fahrenheit
 *                  then prompts user for the
 *                  temperature in its starting
 *                  scale and converts it to 
 *                  the other one and outputs
 *                  the results.
 *
 ***********************************************/

#include <stdio.h>

int main()
{
    //variable declarations and initialization
    float celsius, fahrenheit = 0.0;
    int choice = 0;

    //initial prompt
    printf("Please Choose by selecting 1 or 2,\n");
    printf("1 to convert Celsius to Fahrenheit,\n");
    printf("2 to convert Fahrenheit to Celsius:\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        //C to F prompt
        printf("Convert Celsius to Fahrenheit.\n");
        printf("Enter temperature in Celsius:\n");
        scanf("%f", &celsius);
        
        //actual conversion from C to F
        fahrenheit = (((celsius * 9) / 5) + 32);

        //output answer F
        printf("Fahrenheit is %.2f\n", fahrenheit);
    }
    else
    {
        //F to C prompt
        printf("Convert Fahrenheit to Celsius.\n");
        printf("Enter temperature in Fahrenheit:\n");
        scanf("%f", &fahrenheit);
        
        //actual conversion from F to C
        celsius = (((fahrenheit - 32) * 5) / 9);
        
        //output answer C
        printf("Celsius is %.2f\n", celsius);

    }

    return (0);
}
