/*
*Program: Lab7.2B
*Programmer: Jonathan A. Butler
*Date: 07 Feb 2019
*Description: Switch Case stuff
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    // Variables
    char operative = 0;
    int intputA = 0;
    int intputB = 0;

    // Prompts user to do something
    printf("Input two numbers seperated by a math operator (Ex: + , - , * , / ): ");
    scanf("%d%c%d", &intputA, &operative, &intputB);
    printf("The result of MATH: ");

    // A switch to determine the user inputed variables and operator and prints the result
    switch(operative)
    {
        // Addition
        case '+':
            printf("%d\n", intputA + intputB);
            break;
        // Subtraction
        case '-':
            printf("%d\n", intputA - intputB);
            break;
        // Multiplication
        case '*':
            printf("%d\n", intputA * intputB);
            break;
        // Division
        case '/':
            if (intputA == 0 || intputB == 0)
            {
                printf("Don't divide by zero or else...\n");
            }
            else
            {
                printf("%lf", (double) intputA/intputB);
            }
            break;
        // If the user can't follow simple instructions
        // Sadness
        default:
            printf("...\n");
            printf("Why are you like this...\n");
            printf("ERROR\n");
            break;
    }
}