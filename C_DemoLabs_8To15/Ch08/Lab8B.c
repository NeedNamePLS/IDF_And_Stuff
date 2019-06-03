/*
*Program: Lab8B
*Programmer: Jonathan A. Butler
*Date: 12 Feb 2019
*Description: 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "MyStringHeader.c"
#include "MyStringHeader.h"

int print_the_count(char * inputString, int strLen);
int reverse_it(char * forwardString, int strLen);

int main(void)
{
    int stringLength = 0;
    char firstString[256] = {0};
    char *secondString[] = {firstString};

    printf("Input string\nYour string is: ");
    fscanf(stdin, "%255[^\n]c", &firstString);
    stringLength = strlen(firstString);

    // Calls these functions from a different file
    reverse_it(firstString, stringLength);
    print_the_count(firstString, stringLength);
}