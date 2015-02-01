/*
 *  dec2asc.c - a C program to convert space-separated decimal values 
 *              (from STDIN) to their corresponding ASCII representation
 *              (to STDOUT).
 *
 *  To compile: gcc -o dec2asc dec2asc.c
 */
#include <stdio.h>

int main()
{
	char c;

	while ((fscanf(stdin, "%hhu", &c)) != EOF)
		putchar(c);

	return(0);
}
