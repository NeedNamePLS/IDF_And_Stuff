// Copy a string using an array notation and pointer notation
#include <stdio.h>
#define SIZE 10

void copy1(char * const s1, const char * const s2);
void copy2(char *sl, const char *s2);

int main (void)
{
    char string1[SIZE];          // Create array string1
    char *string2 = "Hello";     // Create pointer for string1
    char string3[SIZE];          // Create array string3
    char string4[] = "Good Bye"; // Create a pointer for string3

    copy1(string1, string2);
    printf("string1 = %s\n", string1);

    copy2(string3, string4);
    printf("string3 = %s\n", string3);
}

// Copy s2 to s1 using array notation
void copy1(char * const s1, const char * const s2)
{
    size_t i;

    for (i = 0; (s1[i] = s2[i]) != '\0'; i++)
    {;}
}

// Copy s2 to s1 using pointer notation
void copy2(char *s1, const char *s2)
{
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2)
    {;}
}