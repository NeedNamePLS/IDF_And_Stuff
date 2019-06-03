/*
*Program: Lab4C
*Programmer: Jonathan A. Butler
*Date: 04 Feb 2019
*Description: User inputs a string and the program displays upto 10 characters of it using fgets and fputs
*/
#include <stdio.h>

int main(void)
{
    char arrayStuff[10];
    printf("Type something: ");
    fgets(arrayStuff, sizeof(arrayStuff), stdin);
    printf("Your string is: ");
    fputs(arrayStuff, stdout);
    printf("\n");

    return 0;
}