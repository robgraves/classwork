/*******************************************************
 *  Matthew Page
 *  
 *  CSCS1320 Fall 2014
 * 
 *  squares.c - A program to take two digit numbers
 *              that end in 5 and square them, using the 
 *              mental math trick we learned in class on
 *              09/16/2014 where 35^2 = 1225
 *              first 2 digits of the result are
 *              the first digit of the base times its
 *              increment, and the last 2 digits of the
 *              result are the square of 5 which is 25
 *
 *
 *
 * ****************************************************/

#include <stdio.h>

int main()
{
    //variable declarations and initializations
    int result1, result2, input, digit1, digit2, answer;        //declaring my variables
    result1 = result2  = input = digit1 = digit2 = answer = 0;   //initialiing my variables

    //prompt loop section forcing valid input (also works with more than 2 digit # if ends in 5)
    while((input%10) != 5)
    {
    printf("Enter a two digit number that ends in 5: \n");  //prompt for user input
    scanf("%d", &input);                                    //collecting user input
    }

    //math section
    digit1 = (input/10);      //integer division, which truncates like floor division to grab tens place
    digit2 = (input%10);      //modulus operation to grab remainder of the above to grab ones place
    result1 = (digit1 * (digit1+1));    //multiplying tens place by its increment for first 2 of answer
    result2 = (digit2 * digit2);        //multiplying 5 by 5 to get the 25 needed for this trick to work
    answer = ((result1*100)+result2);   //turning visual trick to display answer into actually capturing
                                        //numeric value of the answer

    //output section
    printf("%d x %d = %d\n", input, input, answer);     //printing the final answer

    return (0);                         //return statement
}
