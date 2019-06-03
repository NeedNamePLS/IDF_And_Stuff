#include <stdio.h>
#include <string.h>

int aBcSoup(char *string, char x);
int clear_input();

int main()
{
    int count = 0;
    char soup[256];
    char noodle;

    // Super cool and hip prompts telling the user to input a string and a char to search for within the string
    printf("Type some gobalee goop for the alphabet soup.\n");
    fgets(soup, sizeof(soup), stdin);
    clear_input();
    printf("\nType the alphabet noodle you want to caboodle.\n");
    scanf("%c", &noodle);
    clear_input();

    // Sends the string and char to the function to be searched and counted
    count = aBcSoup(soup, noodle);

    // Displays how many occurences of the char was in the string
    if (count > 1)
    {
        printf("\nWoah, there was %d %c's in the soup bro!\n", count, noodle);
    }
    else if (count == 1)
    {
        printf("\nThere was only %d %c in the soup, bummer...\n", count, noodle);
    }
    else
    {
        printf("\nThere was no %c noodles in the broth my bro-th...\n", noodle);
    }
}

// Checks each character in the string and checks if it matches the user designated character
int aBcSoup(char *string, char x)
{
    int count = 0;
    char *search = string;

    printf("%s", string);

    while(search)
    {
        search = strchr(search, x);

        if (search)
        {
            count++;
            search++;
        }
    } //End the loop

    return count;
}

//Clears stdin
int clear_input()
{
   while(getchar() != '\n');
}