/*
 * Matthew Page
 * CSCS 1320 C/C++ September 02, 2014
 *
 * var1.c - a program showing a few types of variables 
 *          and a couple pointer variables.
 *
 *
 * */

#include<stdio.h>

int main()
{
    int a=5;
    int b=0x3D, c=073;
    int *d;
    char e, *f;
    e = 'X';
    d=&c;
    f=&e;

    printf("address of a is : %p\n",&a);
    printf("address of b is : %p\n",&b);    
    printf("address of c is : %p\n",&c);
    printf("address of d is : %p\n",&d);
    printf("address of e is : %p\n",&e);
    printf("address of f is : %p\n",&f);

    printf("a contains: %d\n", a);
    printf("b contains: %d\n", b);
    printf("c contains: %d\n", c);
    printf("d contains: %p\n", d);
    printf("e contains: '%c'(%hhd)\n", e, e);
    printf("f contains: %p\n", f);

    printf("d dereferenced is: %d\n", *d);
    printf("f dereferenced is: '%c'(%hhd)\n", *f, *f);

    return (0);
}
