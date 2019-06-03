/*
*Program: Lab6A
*Programmer: Jonathan A. Butler
*Date: 07 Feb 2019
*Description: Converts the inputed decimal value into binary
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    //Variables ready to be mathed
    uint32_t userInput = 0;
    uint32_t bitChecker = 0x01;

    //Prompts user to input value
    printf("Input a positive decimal number: ");
    scanf("%u", &userInput);
    bitChecker = bitChecker << 31; // Sets bitChecker to the left most value
    printf("Binary Value: ");

    // Loop to systematically check the binary version of user inputed value and the bitChecker
    // Will loop until bitChecker shifts to past last bit
    while(bitChecker > 0)
    {
        // Checks if either userInput or BitChecker has a value in that bit
        if ((userInput & bitChecker) == 0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }

        bitChecker = bitChecker >> 1; 
    }

    printf("\n");

    //Obligatory return 0
	return 0;
}
