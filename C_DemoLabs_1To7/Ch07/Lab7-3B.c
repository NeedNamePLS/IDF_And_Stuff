/*
*Program: Lab7.3B
*Programmer: Jonathan A. Butler
*Date: 08 Feb 2019
*Description: While Loop
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main (void)
{
    int i = 0;
    char theArray[256] = {"How could this happen to me. I made my mistakes. Got no where to run\nNever gonna give you up. Never gonna let you down.\nDarude Sandstorm\n\0"};
    puts(theArray);

    while (i < 256 && theArray[i] != '\0')
    {
        printf("%c", theArray[i]);
        i++;
        if (theArray[i] == '\n')
        {
            break;
        }
    }

    printf("\n");
}