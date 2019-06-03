// MyStringHeader.c
#include <stdio.h>
#include <ctype.h>

#define ERR_NULL_POINTER -1;        // string is null
#define ERR_INVALID_LENGTH -2;      // string length is zero or less

// 
extern int print_the_count(char * inputString, int strLen)
{   
    // Obligatory variables comment
    int theCount = 0;
    int table[26] = {0};
    char tempChar = 0;

    if (!inputString)
    {
        return ERR_NULL_POINTER;
    }
    else if (!strLen)
    {
        return ERR_INVALID_LENGTH;
    }

    printf("The count of each alphabetical character in the string is: \n");

    for (int i = 0; i < 256; i++)
    {
        // Limits what characters are allowed and capitalizes it
        if (inputString[i] >= 65 && inputString[i] <= 122)
        {
            tempChar = inputString[i];
            tempChar = toupper(tempChar);
            table[tempChar - 65] += 1;
            theCount++;
        }
    }

    // 
    for (int i = 0; i < sizeof(table)/sizeof(table[0]); i++)
    {
        printf("%c:%d ", (i + 65), table[i]);
    }
    printf("\n");

    return theCount;
}

// 
extern int reverse_it(char * forwardString, int strLen)
{
    if (!forwardString)
    {
        return ERR_NULL_POINTER;
    }
    else if (strLen <= 0)
    {
        return ERR_INVALID_LENGTH;
    }

    int countDown = 0;
    countDown = strLen;

    //printf("String reversed is: ");

    while (countDown >= 0)
    {
        printf("%c", forwardString[countDown]);
        countDown--;
    }

    printf("\n");

    return 0;
}