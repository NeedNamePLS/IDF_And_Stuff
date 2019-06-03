/*
*Program: Lab8A
*Programmer: Jonathan A. Butler
*Date: 11 Feb 2019
*Description: 
*/

#include <stdio.h>
#include <string.h>

int replace_char(char * string, const char findThisChar,const char replaceItWithThis);
int clear_Input();

int main(void)
{
    // Variables
    char firstString[256] = {0};
    // Pointer
    char * secondString[] = {firstString};
    // More Variables
    char userInput = 0;
    char newOutput = 0;
    int pointer = 0;

    printf("Please input string to be altered: ");
    fscanf(stdin, "%255[^\n]c", &firstString);
    clear_Input();
    printf("Input character you wish to replace with: ");
    fscanf(stdin, "%c", &userInput);
    clear_Input();
    printf("Input a suitable replacement for %c: ", userInput);
    fscanf(stdin, "%c", &newOutput);
    clear_Input();

    // Runs the replacement function while returning the number of changes
    pointer = replace_char(*secondString, userInput, newOutput);

    if (pointer > 0)
    {
        printf("\nThe new string is: \n%s\n", secondString[0]);
        printf("There were %d instances of %c replaced with %c.\n", pointer, userInput, newOutput);
    }

    return 0;
}

int replace_char(char * string, const char findThisChar,const char replaceItWithThis)
{
    // Counter to count the amount of changes
    int changeCounter = 0;
    // Counter to keep track of the array index
    int indexCounter = 0;

    // If the char in the aray does not equal null
    while (string[indexCounter] != '\0')
    {
        // Systematically looks at each char and replaces the user chosen one with the user chosen substitute
        if (string[indexCounter] == findThisChar)
        {
            string[indexCounter] = replaceItWithThis;
            changeCounter++;
        }
        indexCounter++;
    }
    return (changeCounter);
}

// Clears input cache
int clear_Input()
{
    while (getchar() != '\n');
}