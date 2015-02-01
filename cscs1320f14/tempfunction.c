#include <stdio.h>

/* Temperature conversion program with a function call */

#define LOWER   0       /* lower limit of table */
#define UPPER   300     /* upper limit */
#define STEP    20      /* steap size */

int convert(int x);

main()
{
    int celsius, fahr;

    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = convert(fahr);
        printf("%d\t%6d\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    return 0;
}

int convert(int f)
{
    int c;

    c = 5 * (f-32) / 9;
    return c;
}
