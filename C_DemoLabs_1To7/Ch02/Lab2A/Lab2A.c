/* Program declares some variables and prints out the value and size
*
* name: Jonathan Butler
* date: 29 Jan 2019
* project: LabA
*
*/
#include <stdio.h>

int main(void)
{
    // Various data types
    int numberA = 2;
    float numberB = 2.2;
    double numberXY = 24.242424;
    char letter1 = 'Q';

    // Displays the int value of the character
    printf("Size of int = %d \n", sizeof(numberA));
    printf("Size of float = %d \n", sizeof(numberB));
    printf("Size of double = %d \n", sizeof(numberXY));
    printf("Size of char = %d \n", sizeof(letter1));

    // Displays the value of the variable
    printf("Value of int = %d \n", (numberA));
    printf("Value of float = %f \n", (numberB));
    printf("Value of double = %lf \n", (numberXY));
    printf("Value of char = %c \n", (letter1));

    return 0;
}