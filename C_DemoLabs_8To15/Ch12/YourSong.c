#include <stdio.h>

int main()
{
    FILE *fptr;
    char theFile;

    fptr = fopen("/home/student/Downloads/Class/DemoLab/Ch12/song.txt", "r");
    theFile = fgetc(fptr);

    if (fptr != NULL)
    {
        while (theFile != EOF)
        {
            putchar(theFile);
            theFile = fgetc(fptr);
        }
        fclose(fptr);
    }
    else
    {
        // IO error
        printf("IO error: Problem with file\n");
    }
    

    return 0;
}
