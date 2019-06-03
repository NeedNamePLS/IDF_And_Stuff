#include <stdio.h>

int main()
{
    FILE *pFile;

    pFile = fopen("C:/Users/CMT Instructor/Desktop/info.txt", "a");

    if(pFile!=NULL)
    {
        char name[20]="Pete Smith";
        float gpa = 3.4f;

        fprintf(pFile,"%s, %f\n", name, gpa);
        printf("The data has been recorded.");
        fclose(pFile);
    }
    else
    {
        printf("File Error");
    }

    return 0;
}