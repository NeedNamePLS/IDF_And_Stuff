#include <stdio.h>

int main (void)
{
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Swapping
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nSwippity Swap, the numbers are swapped\nNum 1 is now: %d\nNum 2 is now: %d\n", num1, num2);

    return 0;
}