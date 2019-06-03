/*
*Program: Lab7.5A
*Programmer: Jonathan A. Butler
*Date: 08 Feb 2019
*Description: Nested Control Flow
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    char userInput = 0;
    int number = 0;

    printf("This program displays the even or odd numbers from 1-100\n");
    printf("Type E to display evens or O to display odds: ");
    scanf("%c", &userInput);
    
    if (userInput == 'E' || userInput == 'e')
    {
        number = 2;

        for (int i = 0; i < 50; i++)
        {
            printf("%d ", number);
            number += 2;
        }

        printf("\n");
    }
    else if (userInput == 'O' || userInput == 'o')
    {
        number = 1;

        for (int i = 0; i < 50; i++)
        {
            printf("%d ", number);
            number += 2;
        }

        printf("\n");
    }
    else
    {
        printf("Incorrect input\nWhy are you like this...\n");
    }
}