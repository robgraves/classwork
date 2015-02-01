/**************************************************
 *
 * Matthew Page
 *
 * 12/9/2014
 * CSCS 1320
 *
 * ass-key.c -  eoce for cprog, 0x2 ass-key.c
 *              a program to do...
 *
 *
 *************************************************/
#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////
//
//  C/C++ Programming End of Course Experience 0x2
//  ==============================================
//
//  asc2dec - ASCII to decimal conversion
//
//            we've played off and on with ASCII characters and their
//            numeric representations throughout the semester. With 
//            our recent experience with files, along with processing
//            input from the keyboard, I want you to write a program
//            that does the following:
//
//        0 - accepts command-line arguments via main()
//        1 - if an argument is provided (argc > 1), then treat that
//            first argument (argv[1]) as the name of a file in the
//            current directory to open and process
//
//        2 - lacking an argument, accept a string of input into a
//            reasonably-sized char array (at least 80 chars, no
//            more than 255-- your choice). This will be typical
//            input from STDIN.
//
//        3 - create a function called asc2dec, which has a function
//            prototype as follows:
//
//                    void asc2dec(char *);
//
//            This function will be responsible for accessing the 
//            input data (be it from argv[1] or your keyboard input
//            array), and display it in its decimal equivalent.
//
//            For example, an 'A' has a decimal value of 65.
//
//        4 - call this asc2dec function from main(), and pass it
//            the locally scoped array (argv[1] or one from your
//            keyboard input) for processing. The output should be
//            in the form of space separated decimal values, which
//            correspond to each character in the array.
//
//            note: do not let the output exceed 78 characters per
//                  line; if the output is longer, be sure it is
//                  appropriately wrapped to the next line.
//
//        5 - Be sure to add comments to your code
//        6 - Be sure your program compiles cleanly, no warnings/errors
//

//asc2dec function declaration prototype
void asc2dec(char *);

int main(int argc, char **argv)
{
    //variable declarations and initializations
    char input[255];
    int i=0;
    char c;

    //argument check if-else statement
    //if portion checks if there is an argument then opens
    //argument as a file (which has a nested if statement
    //to account for file not existing error message) then a
    //loop to get the characters in the file into an array
	if (argc>1)
    {
        FILE *fptr;
        fptr=fopen(argv[1], "r");
        if(fptr==NULL)
        {
            fprintf(stdout, "Error opening file!\n");
            exit(1);
        }
        while((c=fgetc(fptr))!=EOF)
        {
            input[i]=c;
            i++;
        }
        fclose(fptr);
    }
    //else statement prompts user for input
    else
    {
        printf("Enter a string: ");
        scanf("%255s", input);
    }

    //function call passing input array to 
    //asc2dec function
    asc2dec(input);

	return(0);
}

//asc2dec function definition
void asc2dec(char *input)
{
    int length;
    int i;

    length=(sizeof(input)/sizeof(char));

    for (i=0;i<length;i++)
    {
        printf("%d\n", input[i]);
    }
}
