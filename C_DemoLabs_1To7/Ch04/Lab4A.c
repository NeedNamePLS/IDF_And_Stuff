/*
*Program: Lab4A
*Programmer: Jonathan A. Butler
*Date: 04 Feb 2019
*Description: User inputs a single char then the next char is printed
*/
#include <stdio.h>

int main(void)
{
    int nextInput = 0;
    printf("Enter a character or soemthing: ");
    nextInput = getchar();
    printf("The next character is: ");
    putchar(nextInput + 1);
    printf("\n");
}