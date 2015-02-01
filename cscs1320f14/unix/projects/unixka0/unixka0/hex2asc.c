/*
 *  hex2asc.c - a C program to convert space-separated hexadecimal values
 *              (from STDIN) to their corresponding ASCII representation
 *              (to STDOUT).
 *
 *  To compile: gcc -o hex2asc hex2asc.c
 */
#include <stdio.h>

int main()
{
	char c;

	while ((fscanf(stdin, "%hhX", &c)) != EOF)
		putchar(c);

	return(0);
}
