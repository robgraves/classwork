/***********************************************
 *
 * Matthew Page
 * 11/05/2014
 * CSCS1320 Fall 2014
 * 
 * logic_library.c -    Attempting to recreate
 *                      logic library from 
 *                      CSCS1240 originaly in
 *                      VBscript to C.
 *
 * ********************************************/

#include <stdio.h>

#define PREFERRED      '1'  
#define NOTPREFERRED   '0'

//function declarations, prototypes
char nott(char);
char andd(char, char);
char nandd(char, char);
char orr(char, char);
char norr(char, char);
char xorr(char, char);
char xnorr(char, char);
char halfsum(char, char);
char halfcarry(char, char);
char fullsum(char, char, char);
char fullcarry(char, char, char);

//nott function 
char nott(char input)
{
    if (input == PREFERRED)
    {
        return (NOTPREFERRED);
    }
    else
    {
        return PREFERRED;
    }
}

//andd function
char andd(char input1, char input2)
{
    char result;
    result = NOTPREFERRED;
    if (input1 == PREFERRED)
    {
        if (input2 == PREFERRED)
        {
            result = PREFERRED;
        }
    }
    return result;   
}

//nandd function
char nandd(char input1, char input2)
{
    char result;
    result = nott(andd(input1, input2));
}

//orr function
char orr(char input1, char input2)
{
    char result;
    result = NOTPREFERRED;
    if (input1 == PREFERRED)
    {
        result = PREFERRED;
    }
    else
    {
        if (input2 == PREFERRED)
        {
            result = PREFERRED;
        }
    }
    return result;
}

//norr function
char norr(char input1, char input2)
{
    char result;
    result =  nott(orr(input1, input2));
    return result;
}

//xorr function
char xorr(char input1, char input2)
{
    char result;
    result = NOTPREFERRED;
    if (orr(input1, input2) == PREFERRED)
    {
        if (nandd(input1, input2) == PREFERRED)
        {
            result = PREFERRED;
        }
    }
    return result;
}

//xnorr function
char xnorr(char input1,char input2)
{
    char result;
    result = nott(xorr(input1, input2));
    return result;
}

//halfsum function
char halfsum(char input1, char input2)
{
    char result;
    result = xorr(input1, input2);
    return result;
}

//halfcarry function
char halfcarry(char input1, char input2)
{
    char result;
    result = andd(input1, input2);
    return result;
}

//fullsum function
char fullsum(char input1, char input2, char carryin)
{
    char result;
    char firstop;
    firstop = halfsum(input1, input2);
    result = xorr(firstop, carryin);
    return result;
}

//fullcarry function
char fullcarry(char input1, char input2, char carryin)
{
    char result;
    char firstset;
    char secondset;
    char thirdset;
    char firstor;
    firstset = andd(input1, input2);
    secondset = andd(input2, carryin);
    thirdset = andd(input1, carryin);
    firstor = orr(firstset, secondset);
    result = orr(firstor, thirdset);
    return result;
}

