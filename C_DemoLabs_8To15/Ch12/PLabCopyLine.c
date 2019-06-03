/*
*Program: PLabCopyLine
*Programmer: Jonathan A. Butler
*Date: 26 Feb 2019
*Description: 
*/

#include <stdio.h>

int main()
{
    FILE *read_fp;                          // File pointer for read file
    FILE *write_fp;                         // File pointer for write file
    char string[256] = {0};                 // Char array for holding lines to write into the file
    char *tempStr = string;

    // Opens both files to read from and to write into
    read_fp = fopen("/home/student/Downloads/Class/DemoLab/Ch12/song2.txt", "r");
    write_fp = fopen("/home/student/Downloads/Class/DemoLab/Ch12/line-by-line.txt", "w");

    if(read_fp != NULL) 
    {
        if(write_fp != NULL)
        {
            while (!feof(read_fp))
            {
                tempStr = fgets(string, 256, read_fp);   // Reads a line from the file
                if (tempStr)
                {fputs(string, write_fp);}       // Then writes it down
                
            }
            fclose(read_fp);                   // Closes read file 
            fclose(write_fp);                  // Closes write file 
            printf("File copy complete\n");    // Lets the user know the program ran smooth~ish
        }
        else
        {
            printf("Error Write File Open\n"); // Lets user know something went wrong
        }
    }
    else
    {
        printf("Error Read File Open\n");      // Lets user know something went wrong
    }

    return 0;
}