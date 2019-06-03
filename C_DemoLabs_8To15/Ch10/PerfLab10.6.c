/*
*Program: Lab10.6
*Programmer: Jonathan A. Butler
*Date: 19 Feb 2019
*Description: 
*/

#include <stdio.h>

#define STRINGIFY(x) #x
#define MERGE(x,y) STRINGIFY(x##y)
#define STRING_WRAP(x,y) "\""MERGE(x,y)"\""
#define BUFF_SIZE 64

int main(void)
{
    char buffArray[BUFF_SIZE] = {STRING_WRAP(base, ball)};
    puts(buffArray);

    return 0;
}