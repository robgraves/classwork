#include <stdio.h>
 
int main()
{
    int num=0;
    printf("Enter any number:");
    scanf("%d",&num);
        if( num % 2 == 0)
            printf("%d is a even number\n",num);
        else
            printf("%d is a odd number\n",num);
    return 0;
}
