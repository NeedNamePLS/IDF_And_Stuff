#include <stdio.h>

int main()
{
    FILE *pFile;
    char input[81];

    pFile = fopen("C:/Downloads/Class/Practice/test.txt", "r");

    if (pFile != NULL)
    {
        // Process files
        while(!feof(pFile))
        {
            fgets(input, 81, pFile);
            printf("%s", input);
        }
        fclose(pFile);
    }
    else
    {
        // IO error
        printf("IO error: Problem with file\n");
    }

    return 0;
}