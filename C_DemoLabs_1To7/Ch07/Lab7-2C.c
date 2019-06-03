/*
*Program: Lab7.2B
*Programmer: Jonathan A. Butler
*Date: 07 Feb 2019
*Description: Else If thing
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    unsigned int numberA = 0;
    unsigned int numberB = 0;
    unsigned int numberC = 0;

    printf("Input two different number values seperated by a comma ',': ");
    scanf("%i,%i", &numberA, &numberB);

    if (numberA == numberB)
    {
        printf("(╯°□°）╯︵ ┻━┻ERROR\n");
        printf("What part of different did you not understand?\n");
    }
    else if (numberA > numberB)
    {
        numberC = numberA;
    }  
    else
    {
        numberC = numberB;
    }

    if ((numberA + numberB + numberC) > 2)
    {
        printf("%i\n", (numberA + numberB + numberC));
    }

    return 0;
}