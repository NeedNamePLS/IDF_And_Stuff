#include <stdio.h>

int main()
{
    int input, reverse = 0;

    // Prompt user for input number over 0
    printf("Only numbers over 0 are allowed...\n")
    printf("Reverse: ");
    scanf("%d", &input);

    // Makes sure they obey or they are trapped forever or until they shut down the terminal or ctrl+c
    while(input < 1)
    {
        printf("Only numbers over 0 are allowed...\n")
        printf("Reverse: ");
        scanf("%d", &input);
    }

    // Loop that makes the magic happen
    while(input > 0)
    {
        reverse = (reverse*10) + (input%10);
        input = input/10;
    }

    // Lets user know the reverse numbere
    printf("Da Reverse Is: %d\n", reverse);
}