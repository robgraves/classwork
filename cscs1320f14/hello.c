/*
 * Matthew Page 
 * C/C++  Fall 2014  08/31/2014
 *
 * hello.c - a simple program that outputs "Hello World!" message.
 *
 * This program should simply use the one preprocessor directive and
 * the one and only function, the main() function which outputs "Hello
 * World!" then returns 0 upon success. 
 * */

#include <stdio.h>  // preprocessor directive, includes standard I/O header

int main()          // main function         
{
	fprintf(stdout, "Hello, World!\n");     // frprintf() function prints to STDOUT
	return (0);                             // return 0 on success
}
