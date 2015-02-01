/* Matthew Page 
 * CSCS 1320 Fall 2014
 *
 * odometer.c - rollover 2 digits
 *              like an odometer in 
 *              a car.
 *
 *              Revised to contain 6
 *              digits and rollover
 *              from 999999 to 000000
 *              but using nested if
 *              statements, trying to
 *              find alternate means
 *              of accomplishing this.
 *
 * */

#include <stdio.h>

int main()
{
	int number[6];
	int i, input;
	number[0] = 0;
	number[1] = 0;
	number[2] = 0;
	number[3] = 0;
	number[4] = 0;
	number[5] = 0;

	printf("How much to count?");
	scanf("%d", &input);

	for(i=0;i<input;i=i+1)    
	{
		number[5]=number[5]+1;
		if (number[5]>9)
		{
			number[5]=0;
			number[4]=number[4]+1;
			if (number[4]>9)
			{
				number[4] = 0;
				number[3] = number[3]+1;
				if (number[3]>9)
				{
					number[3] = 0;
					number[2] = number[2]+1;
					if (number[2]>9)
					{
						number[2] = 0;
						number[1] = number[1]+1;
						if (number[1]>9)
						{
							number[1] = 0;
							number[0] = number[0]+1;
							if (number[0]>9)
							{
								number[0] = 0;
							}
						}				
					} 
				}
			}
		}
	printf("%d %d %d %d %d %d\n", number[0], number[1], number[2], number[3], number[4], number[5]);
	}
	return (0);
}
