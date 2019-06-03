/*
*Program: Lab9.3
*Programmer: Jonathan A. Butler
*Date: 19 Feb 2019
*Description: 
*/

//my_source.c (source file)
#include <stdio.h>
#include "my_header.h"

int main(void)
{
    printf("%d\n", add_num(1, 2));

    return 0;
}
//my_header.h (header file)
#ifndef MY_HEADER_INCLUDED_
#define MY_HEADER_INCLUDED_

int add_num(int x, int y);
#endif
//my_header.c (header file definition)
int add_num(int x, int y)
{
    return x+y;
}