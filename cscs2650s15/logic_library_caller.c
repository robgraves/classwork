/***********************************************
 *
 * Matthew Page
 * 01/22/2015
 * CSCS2650 Spring 2015
 * 
 * logic_library_caller.c -  
 *
 *              Program that includes the 
 *              logic_library.c full of logic
 *              functions to be used in this 
 *              program.
 *
 * ********************************************/



#include <stdio.h>
#include "logic_library.c"

char input;         //originally created for single input in the case of nott 
char input1;        //written for 2 inputs like every other function
char input2;        //written for 2 inputs like every other function
char carryin;       //written for 3 inputs like fullsum and fullcarry
char binary1[8] = {"0","0","0","0","0","0","0","1"};    //for binary math
char binary2[8] = {"0","0","0","0","0","0","0","1"};    //for binary math

int newvalue;   //returned from function value
char binresult[8];

//calling portion of the program
//(to be moved outside of this file eventually)
int main()
{
    /* 
    //for 1 input
    printf("Enter a 1 or 0:\n");
    scanf("%c", &input);
    newvalue = nott(input);
    */

    /*
    //for 2 inputs
    printf("Enter 2 values (1 or 0) seperated by a space:\n");
    scanf("%c %c", &input1, &input2);
    newvalue = xnorr(input1, input2);
    */

    /*
    //for 3 inputs
    printf("Enter 3 values, seperated by spaces, 2 inputs, and a carryin value (1 or 0):\n");
    scanf("%c %c %c", &input1, &input2, &carryin);                     
    newvalue = fullcarry(input1, input2, carryin);
    */

    //binary math
    //printf("Enter 2 8-digit values (compromised 1 or 0):\n");
    //scanf("%c %c", &input1, &input2);
    
    binresult[] = adder(binary1[8], binary2[8]);

    
    //final output of answer
    printf("%c\n", newvalue);

    return (0);
}

