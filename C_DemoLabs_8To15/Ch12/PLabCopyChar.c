/*
*Program: PLabCopyChar
*Programmer: Jonathan A. Butler
*Date: 26 Feb 2019
*Description: 
*/

#include <stdio.h>

int main()
{
    FILE *read_fp;                          // File pointer for read file
    FILE *write_fp;                         // File pointer for write file
    char string;                            // Char array for holding lines to write into the file

    // Opens both files
    read_fp = fopen("/home/student/Downloads/Class/DemoLab/Ch12/song.txt", "r");
    write_fp = fopen("/home/student/Downloads/Class/DemoLab/Ch12/char-by-char.txt", "w");

    if(read_fp != NULL)
    {
        if(write_fp != NULL)
        {
            while (!feof(read_fp))
            {
                string = fgetc(read_fp);       // Reads a char from the file
                if (string > 8) 
                {
                    fputc(string, write_fp);   // Then writes it down
                }
            }
            fclose(read_fp);                   // Closes read file 
            fclose(write_fp);                  // Closes write file 
            printf("File copy complete\n");    // Lets the user know the program ran smoothly
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