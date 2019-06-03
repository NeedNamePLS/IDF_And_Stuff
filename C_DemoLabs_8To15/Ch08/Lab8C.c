/*
*Program: Lab8C
*Programmer: Jonathan A. Butler
*Date: 14 Feb 2019
*Description: To define and understand recursive function and stuff
*/

#include <stdio.h>
#define MAXIMUM_SEQ_NUM (2300)
#define ERROR_VALUE (105)

#define MANUAL_TEST
#define AUTO_TEST

unsigned long shadow_sequence_number(int placeNumber);

int main()
{
    //Decleration of Standard Variables
    int userInput = 0;                  //The Variable used to hold the user's input
    unsigned long shadowNumber = 0;	    //The variable used to hold the return from shadow_sequence_number

    //The given Manual Tester
    #ifdef MANUAL_TEST
	int howManyToCalculate = 0;
	int tempValue = 0;

	printf("How many numbers would you like to calculate?\n");
	scanf("%d", &userInput);
	putchar(10);

	for (int i = 1; i <= userInput; i++)
	{
		shadowNumber = shadow_sequence_number(i);
		printf("S(%d):\t%lu \n", i, shadowNumber);
	}
    printf("\n[AutoTester]\n");
    #endif

    //The given auto tester
    #ifdef AUTO_TEST

    #define BUFF_SIZE 24
    tempValue = 0;
	int numberOfTestsRun = 0;
	int numberOfTestsPassed = 0;
	int placeNumbers[BUFF_SIZE] = { -31337, ((MAXIMUM_SEQ_NUM + 1) * -1), (MAXIMUM_SEQ_NUM * -1), -1337, -100, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 100, 1337, MAXIMUM_SEQ_NUM, (MAXIMUM_SEQ_NUM + 1), 31337 };
	unsigned long returnValues[BUFF_SIZE] = { ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, 9, 0, 9, 25, 50, 86, 135, 199, 280, 380, 501, 645, 814, 338345, 797553920, 4058312045, ERROR_VALUE, ERROR_VALUE };

	for (int i = 0; i < BUFF_SIZE; i++)
	{
		shadowNumber = shadow_sequence_number(placeNumbers[i]);
        printf("%u\n",shadowNumber);
		numberOfTestsRun++;
		if (tempValue == returnValues[i])
		{
			numberOfTestsPassed++;
		}
	}

	printf("\nNumber of tests run:\t%d\n", numberOfTestsRun);
	printf("Number of tests passed:\t%d\n", numberOfTestsPassed);
    #endif
    
    return 0;
}

// Function that performs the actual math formula and returns the value
unsigned long shadow_sequence_number(int placeNumber)
{
    int returnValue;

	// Prevents unrealistic or dangerous number inputs
	if (placeNumber <= 0 || placeNumber > 2300)
	{
		returnValue = 105;
	}
	else if (1 == placeNumber)
	{
		returnValue = 9;
	}
    else if (2 == placeNumber)
    {
        returnValue = 0;
    }
	else
	{
		returnValue = shadow_sequence_number(placeNumber - 1) + (placeNumber * placeNumber); // S(n-1) + (n*n)
	}

	return returnValue;
}