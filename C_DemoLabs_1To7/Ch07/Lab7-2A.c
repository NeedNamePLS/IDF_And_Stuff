/*
*Program: Lab7.2A
*Programmer: Jonathan A. Butler
*Date: 07 Feb 2019
*Description: If Else stuff
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main (void)
{
    char theArray[256] = {0};
    
    printf("Type something or don't, I'm not your mom...\n");
    scanf("%255[^\n]s", &theArray);

    if (theArray[0] >= 32 && theArray[0] < 126)
    {
        printf("%s\n", theArray);
    }
    else
    {
        printf("Don't type that\n");
    }

}