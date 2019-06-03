#include <stdio.h>

int main (void)
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0.0)
    {
        printf("You have entered a negative number\n");
    }
    else if (num > 0.0)
    {
        printf("You have entered a positive number\n");
    }
    else
    {
        printf("You have entered a zero or a combination of things that is not a number\n");
    }

    return 0;
}