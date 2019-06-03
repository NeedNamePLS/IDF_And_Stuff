#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

//Did the bonus bitwise thing
int main(void)
{
	int userInputNumber = 0;
    uint16_t inTest = 0;
    uint16_t bitTest = 0x01;

	printf("Input a number:  \n");
	scanf("%d", &userInputNumber);
    inTest = userInputNumber;

	if ((inTest & bitTest) == 1) // If there is a remainder from num / 2 then it, by definition, is odd
	{
		/* If the number is odd, multiply the number by 2 and store the result in the original variable... */
		userInputNumber = userInputNumber * 2;
		/* ...and print the new number */
		printf("The number was odd but I made it even. \nThe new number is %d. \n", userInputNumber);
	}
	else
	{
		/* If the number is even, say so */
		printf("The number is even. \n");
	}


	return 0;
}