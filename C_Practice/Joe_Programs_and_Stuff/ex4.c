#include <stdio.h>

int displayPrimeNumber(int x); // Function prototype, forward declaration

int main (void)
{
    int num1, num2, x, help;

    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    printf("Prime numbers between %d and %d are: ", num1, num2);

    // Perform magic I mean math
    for (x = num1 + 1; x < num2; x++)
    {
        help = displayPrimeNumber(x); // Default flag/help

        if (help == 0) // If flag = 0, display x
        {
            printf("| %d ", x);
        }
    }
    printf("|\n\n");

    return 0;
}

int displayPrimeNumber(int x)
{
    int y, help = 0;

    for (y = 2; y <= x/2; y++)
    {
        if (x % y == 0)
        {
            help = 1;
            break;
        }
    }
    
    return help;
}