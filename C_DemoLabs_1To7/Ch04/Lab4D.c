/*
*Program: Lab4D
*Programmer: Jonathan A. Butler
*Date: 04 Feb 2019
*Description: User inputs a ffull name and is printed out on seperate line using scanf
*/
#include <stdio.h>

int main(void)
{
    //char variable arrays
    char firstName[21] = {0};
    char middleName[21] = {0};
    char lastName[21] = {0};

    printf("Enter a First, Middle, and Last name: \n");
    scanf("%20s\t%20s\t%20s", &firstName, &middleName, &lastName);
    printf("\nUser Inputed Name:\n");
    printf("%s\t\n%s\t\n%s", firstName, middleName, lastName);
    printf("\n");

    //int variables
    int numberA = 0;
    int numberB = 0;
    int numberC = 0;

    printf("\nEnter two integers seperated by an * for the maths:\n");
    scanf("%d\t%d", &numberA, &numberB);
    numberC = (numberA * numberB);
    printf("The math says %d * %d = %d", numberA, numberB, numberC);

    return 0;
}