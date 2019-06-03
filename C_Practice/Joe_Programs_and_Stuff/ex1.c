#include <stdio.h>

int main (void)
{
    float farh, cel;
    printf("Enter a temperature amount in celsius: ");
    scanf("%f", &cel);

    farh = (1.8 * cel) + 32;
    printf("Temperature in fahrenheit is: %f F\n", farh);

    return  0;
}