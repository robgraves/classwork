/*
 * structs.c
 *
 *  An example of using structs in C, along with arrays.
 *
 * To compile: gcc -o structs1 structs1.c
 *
 */
#include<stdio.h>
//#include<string.h>

int main()
{
	int i;
	char entry[80], entries = 4, junk;

	struct person {
		char name[80];
		int age;
		float height;
	};

	do {
		printf("How many people in your database? ");
		scanf("%d", &entries);
	} while (entries <= 0);

	struct person people[entries];

	for(i=0; i<entries; i++)
	{
		printf("Person %d of %d:\n", (i+1), entries);
		printf("==============\n");

		// prompt for name (string)
		printf("Please enter the person's first name: ");

		scanf("%s", people[i].name);
//		fgets(entry, sizeof(entry), stdin);
//		strcpy(people[i].name, entry);

		// prompt for age (integer)
		printf("Please enter %s's age: ", people[i].name);
		scanf("%d", &people[i].age);

		// prompt for height (float)
		printf("Please enter %s's height: ", people[i].name);
		scanf("%f", &people[i].height);

		// Get newline out of the input stream
		junk = fgetc(stdin);
//		fgets(junk, sizeof(junk), stdin);
	}

	printf("\n\nThe names of the people are:\n");
	for(i=0; i<entries; i++)
	{
		printf("#%d: %s\t", (i+1), people[i].name);
	}
	printf("\n\n");

	printf("The full bios of the people are:\n");
	for(i=0; i<entries; i++)
	{
		printf("#%d: %s, age: %d, height: %f\n", (i+1), people[i].name, people[i].age, people[i].height);
	}

	return(0);
}
