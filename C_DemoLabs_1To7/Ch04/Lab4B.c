/*
*Program: Lab4B
*Programmer: Jonathan A. Butler
*Date: 04 Feb 2019
*Description: User inputs a single char then the previous char is printed using getc and putc
*/
#include <stdio.h>

int main(void)
{
    int leInput = 0;
    printf("Enter a character pls: ");
    leInput = getc(stdin);
    printf("The previous character is: ");
    putc(leInput - 1, stdout);
    printf("\n");

    return 0;
}