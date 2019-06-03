/*
*Program: Calculator
*Programmer: Jonathan A. Butler
*Date: 12 Feb 0019
*Description: 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int getMathed();
int add(float numberX, float numberY);
int subtract(float numberX, float numberY);
int multiply(float numberX, float numberY);
int divide(float numberX, float numberY);
int clear_Input();

int main(void)
{
    // Lets the user know what they are getting into
    printf("Ready for math?\n\n");
    // Calls the important function where most of the magic happens
    getMathed();

    return 0;
}

// The real main function that is seperate so I can have an easy looping method
int getMathed()
{
    // Tired of retyping the same variable type
    float inputA = 0, inputB = 0;
    char operator = 0;
    int mathContinue = 0;

    printf("Please input two numbers seperated by the operator you wish to be use\n");
    printf("[This calculator is built with these operators ( + , - , * , / ) in mind]: ");
    scanf("%f%c%f", &inputA, &operator, &inputB);
    printf("\n");

    // Operator stuff
    if (operator == '+')
    {
        add(inputA, inputB);
    }
    else if (operator == '-')
    {
        subtract(inputA, inputB);
    }
    else if (operator == '*')
    {
        multiply(inputA, inputB);
    }
    else if (operator == '/')
    {
        divide(inputA, inputB);
    }
    else
    {
        printf("Now one of use screwed up here but I can do no wrong sooooo");
    }
    clear_Input();
    printf("\n\nTry again? Enter 1 for yes and 0 for no: ");
    scanf("%d", &mathContinue);

    // Determines if the user continues or not
    if (mathContinue == 1)
    {
        // The wild ride continues
        getMathed();
    }
    else if (mathContinue == 0)
    {
        printf("Goodbye");
    }
    else
    {
        // Lets the user know we are not mad, just disappointed
        printf("Why are you like this?");
    }

    printf("\n");
}

// Performs addition
int add(float numberX, float numberY)
{
    printf("%.00f + %.00f = %.00f", numberX, numberY, numberX + numberY);
    return 0;
}

// Performs subttraction
int subtract(float numberX, float numberY)
{
    printf("%.00f - %.00f = %.00f", numberX, numberY, numberX - numberY);
    return 0;
}

// Performs multiplication
int multiply(float numberX, float numberY)
{
    printf("%.00f * %.00f = %.00f", numberX, numberY, numberX * numberY);
    return 0;
}

// Performs division
int divide(float numberX, float numberY)
{
    // Lets user know don't divide with 0
    if (numberX == 0 || numberY == 0)
    {
        printf("ERROR division with 0 not applicable");
    }
    else
    {
        printf("%.00f / %.00f = %.00f", numberX, numberY, numberX / numberY);
    }
    return 0;
}

// Resets input cache
int clear_Input()
{
    while (getchar() != '\n');
}