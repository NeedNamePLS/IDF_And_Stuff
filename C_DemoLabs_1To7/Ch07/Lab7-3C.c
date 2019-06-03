/*
*Program: Lab7.3C
*Programmer: Jonathan A. Butler
*Date: 08 Feb 2019
*Description: Do-While Loop
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>

int main (void)
{
    // Variables
    int inputArray[26] = {0};
    char userInput = 0;
    int counter = 0; // Didn't like just being an i

    printf("Type something pls: ");

    do
    {
        userInput = getc(stdin);

        // Only allows alphabetical inputs and ignores everything else
        if ((userInput >= 65 && userInput <= 90) || (userInput >= 97 && userInput <= 122))
        {
            userInput = toupper(userInput);
            inputArray[counter] = userInput;
            counter++;
        }
    }
    while (userInput != '\n');

    // Puts stuff in screen
    for (int i = 0; i < 26; i++)
    {
        putchar(inputArray[i]);
    }

    printf("\n");

    return 0;
}