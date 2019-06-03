#include <stdio.h>
#include <ctype.h>

int main()
{
    int test[5] = {11,22,33,44,55};

    char string[256];
    char *ptr;
    int conCounter = 0, vowCounter = 0, index = 0;

    // Prompts user to input a ptr
    printf("\nInput a string\n");
    scanf("%s", &string);
    ptr = string;

    // Goes through the entire string to the end
    while(*ptr != '\0')
    {
        // Checks whether the character is an alphabetical char
        if (isalpha(*ptr))
        {
            if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
            {
                vowCounter++;
            }
            else if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            {
                vowCounter++;
            }
            else
            {
                conCounter++;
            }
        }
        ptr++;
    } // End of while

    // Prints the total Consonants and Vowels if any
    printf("Total Consonants in ptr: %d\n", conCounter);
    printf("Total Vowels in ptr: %d\n", vowCounter);

    for (int i = 0; i < 5; i++)
    {
        if (test[i] & 1)
        {
            printf("%d is Odd\n", test[i]);
        }
        else
        {
            printf("%d is Even\n", test[i]);
        }
    }
}