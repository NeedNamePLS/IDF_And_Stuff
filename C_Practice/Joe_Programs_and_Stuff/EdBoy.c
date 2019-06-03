#include <stdio.h>
#include <string.h>

void SonOfAShepard(char *EdBoy);

// Here so we can test out the function by creating a input string
int main()
{
    char string[256];

    printf("put string\n");
    scanf("%s", &string);

    // Calls the function and sends the string through to be checked
    SonOfAShepard(string);
}

// Will print the string if it ends with ed
void SonOfAShepard(char *EdBoy)
{
    // Checks if the last two char are ed
    if (EdBoy[strlen(EdBoy)-1] == 'd' && EdBoy[strlen(EdBoy)-2] == 'e')
    {
        printf("%s\n", EdBoy);
    }
    else
    {
        // If the string doesn't end with ed
        printf("Life has many doors\n");
    }
}