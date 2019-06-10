#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char userInput[256];
    int asciiTotal = 0;

    printf("This program will convert every character to their ASCII value and display the total.\nInput a string: ");
    fgets(userInput, sizeof(userInput), stdin);
    char *pos = strchr(userInput, '\n');
    if(pos) *pos = 0;

    for (int i = 0; i < strlen(userInput); i++)
    {
        asciiTotal += (int)userInput[i];
    }

    printf("The total value of the inputed string is: %d", asciiTotal);

    return 0;
}