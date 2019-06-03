/*
*Program: PLabMightyMorphine
*Programmer: Jonathan A. Butler
*Date: 26 Feb 2019
*Description: 
*/

#include <stdio.h>

int main(int argc, char * argv[])
{
    FILE *fp;
    char theFile;

    // opens the file
    fp = fopen("/home/student/Downloads/Class/DemoLab/Ch12/mightymorphin.txt", "r");
    theFile = fgetc(fp);

    // Reads the file char by char
    while (!feof(fp))
    {
        //Read one char at a time and prints it
        char c = fgetc(fp);
        printf("%c", c);
    }

    // Closes the file
    fclose(fp);
    fp = NULL;

}