#include <stdio.h>

int clear_input();

int main()
{
    int input;
    char output;

    printf("\nInput a number for an ASCII char: ");
    scanf("%d", &input);
    clear_input();

    while(input < 33 || input > 126)
    {
        printf("Thats not an appropriate ASCII value\n");
        printf("Input a number for an ASCII char: ");
        scanf("%d", &input);
        clear_input();
    }

    output = input;
    printf("ASCII: %c\n", output);
}

//Clears stdin
int clear_input()
{
   while(getchar() != '\n');
}