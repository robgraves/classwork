/*************************************************
 *
 * Matthew Page
 * 10/30/2014
 * CSCS 1320
 * Fall 2014
 * 
 * knowledgeassessment.c -  write a program that
 *      that doesn;t write anythign for a prompt
 *      but waits for user input, then when a user
 *      enters say "ABC" it outputs "65 66 67" or
 *      say "ABC DE0" would output "65 66 67 32 68
 *      48 10"
 *
 * **********************************************/

#include <stdio.h>

int main()
{
    //variable declarations and initializations
    int askey=0;        //ASCII value

    //prompt user for input, sort of
    while(askey!=EOF)
    {
        askey=fgetc(stdin);
        printf("%d ", askey);
    }
    printf("\n");
    return (0);
}
