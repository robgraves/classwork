/*
 * info.c - program to generate information stream for processing.
 *
 *          In order to run, this program must be named according
 *          to the value stored in the name[] array. Do not change
 *          the code or values in this source code, but match the
 *          executable name as appropriate.
 *
 *          By default, no data is generated. In order to alter
 *          this behavior, provide a whole number as the first
 *          argument on the command-line, and that many lines of
 *          output will be generated (to STDOUT by default).
 *
 * To compile: gcc -o PROGRAM_NAME info.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int index, max, x, y, i, a, b;
	char name[] = { 0x64, 0160, (114-63), (064+03), 0x00 };
	char file[(strlen(name)+1)]; 

	x = strlen(*(argv+0));
	y = strlen(name);

	for (i = 0; i <= y; i++)
	{
		file[i] = *(*(argv+0)+(x-y)+i);
	}

	if (strcasecmp(file, name) != 0)
	{
		fprintf(stderr, "ERROR: filename is incorrect!\n");
		fprintf(stderr, "       must match name[] string\n");
		exit(1);
	}

	if (argc >= 2)
	{
		max = atoi(*(argv+1));
	}
	else
	{
		max = 0;
	}

	if (argc >= 3)
	{
		srand(atoi(*(argv+2)));
	}
	else
	{
		srand(1730);
	}

	for (index = 1; index <= max; index++)
	{
		x = rand() % 849 + 50;
		y = rand() % 1699 + 300;

		if (((x % 2) == 0) && (y % 7) == 4)
		{
			a = x;
			b = y;
			i = 0;
		}

		if (i == 12)
		{
			fprintf(stdout, "%d\t%.3d-%.3d\n", index, a, b);
			i = 0;
		}


		if (((x % 3) == 0) && ((y % 4) > 2))
			fprintf(stdout, "%d\tblank\n", index);
		else if (((x % 7) < 4) && ((y % 5) > 3))
			fprintf(stdout, "%d\terror %d\n", index, ((x % 20) + 1));
		else
			fprintf(stdout, "%d\t%.3d-%.3d\n", index, x, y);

		i = i + 1;
	}

	return(0);
}
