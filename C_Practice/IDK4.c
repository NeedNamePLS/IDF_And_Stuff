#include <stdio.h>
#include <string.h>

int main()

// implement fgets() instead of gets().
// as well as strncmp() instead of strcmp(), strncpy() instead of strcpy() and so on
{
    char buff[15];
    int pass= 0;

    printf("Enter the password: ");
    fgets(buff, 16, stdin);

    if(strncmp(buff, "pass1234", 16))
    {
        printf("Correct password");
        pass = 1;
    }
    else
    {
        printf("Wrong password\n");

    }
    if(pass)
    {
        printf(" Root privileges\n");
    }
    return 0;
}