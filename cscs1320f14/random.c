#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x;
    srand(time(NULL));
    x = rand();
    x = ((x%6)+1);
    printf("%d\n", x);

    return (0);
}
