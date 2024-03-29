//ReadFile: How to read a file using C/C++
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(int argc, char * argv[])
{
    // ReadFile.exe <filename>

    if (argc != 2)
    {
        printf("Usage: Readfile.exe <filename>\n");
        return;
    }
    
    //1. Open the file for reading
    FILE * fp = fopen(argv[1], "r");
    if (NULL == fp)
    {
        printf("Failed to open %s\n", argv[1]);
        return;
    }


    //2. Read from file as long as it has data (not end of file)
    while (!feof(fp))
    {
        //Read one char at a time
        int c = fgetc(fp);
        printf("%d ", c);
    }

    //3. We must close the file
    fclose(fp);
    fp = NULL;

}