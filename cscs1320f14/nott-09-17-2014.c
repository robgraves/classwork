#include <stdio.h>

char preferred = '1';
char other = '0';

char nott( char operand )
{
    if ( operand == preferred ) return other; else return preferred;
}

int main( int argc, char * argv[ ] )
{
    /*
    char * a;
    char* a;
    char *a;
    char*a;    
    these are all the same */

    /*
    int * a,b;
    int *a,*b;

    char * a[];
    char *a[];
    char* a[];
    char*a[];
    */

    // prompt: notc abc def hg <ENTER>
    //          0   1   2   3
    //          pointers to "a" "d "and "h"
    //          as an array of pointers, tokens passed from CLI to program
    //
    //
    // char *a; // char pointer named a
    //
    // *a = 12; // 'value at' a is assigned twelve.
    // 


    char x;
    x = nott( other );
    
    printf( "%c: %d", x, *argv[1] );
    //printf( "%c: %s", x, *argv[1] );
    //printf( "%c", x );

    return (0);
}
