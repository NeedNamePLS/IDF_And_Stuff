/*
*Program: Lab7.2B
*Programmer: Jonathan A. Butler
*Date: 07 Feb 2019
*Description: 
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

void binaryConverter(int number);

int main(void)
{
    signed int userInput = 0;

    // Prompts user for input
    printf("Input number pls: ");
    scanf("%d", &userInput);

    if (((unsigned int)userInput >> 31) == 1)
    {
        printf("It's negative\n");
    }
    else
    {
        printf("Binary Version:   ");
        binaryConverter(userInput);

        // Not fully sure how this works but I guess it flips the value to the negative binary version
        userInput = ~(unsigned int)userInput;
        printf("Negative Version: ");
        binaryConverter(userInput);
    }
    
}

// Loop that systematically checks the binary value and prints it
void binaryConverter(signed int number)
{
    // Variables for the method
    unsigned int bitCheck = 1;
    int bitCounter = 0;

    bitCheck = bitCheck << 31;

        while(bitCheck > 0)
        {
            // This is to add spaces between each bit for readability
            if (bitCounter == 4)
            {
                printf(" ");
                bitCounter = 0;
            }
            // The important part that actually prints the binary part
            if ((number & bitCheck) == 0)
            {
                 printf("0");
            }
            else
            {
                printf("1");
            }
            //Moves to the next bit
            bitCheck = bitCheck >> 1;
            //Add to the counter
            bitCounter++;
        }
        printf("\n");
}