#include <stdio.h>

void RushB(char *cyka);

// Here so we can test out the function by creating a input string
int main()
{
    char string[256];

    printf("put string\n");
    scanf("%s", &string);

    // Calls the function and sends the string through to be checked
    RushB(string);
}

// Will print out the string if it starts with b
void RushB(char *cyka)
{
    // Checks if the first char is b
    if (cyka[0] == 'b')
    {
        printf("%s\n", cyka);
    }
    else
    {
        // If the string doesn't start with b
        printf("RUSH B\n");
    }
}