/*
*Program: PLabUsername
*Programmer: Jonathan A. Butler
*Date: 25 Feb 2019
*Description: 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int clear_Input();

int main (void)
{
    int studentCounter = 0;
    char firstName[20] = {0};
    char middleName[20] = {0};
    char lastName[20] = {0};
    char userName[24] = {0};

    printf("Input the number of students you wish to register: ");
    scanf("%i", &studentCounter);
    clear_Input();

    if (studentCounter > 0)
    {
        printf("Please input the student's name in this format: First Middle Last\n");

        for (int i = 0; i < studentCounter; i++)
        {
            printf("Student %d: ", i+1);
            scanf("%20s %20s %20s", &firstName, &middleName, &lastName);

            userName[0] = tolower(firstName[0]);
            userName[1] = tolower(middleName[0]);
            
            for (int j = 0; j < strlen(lastName); j++)
            {
                userName[2+j] = tolower(lastName[j]);
            }

            FILE *pFile;

            if (pFile != NULL)
            {
                pFile = fopen("/home/student/Downloads/Class/DemoLab/Ch12/ClassRoster.txt", "a");
                fprintf(pFile, "%s %s %s has a username of %s\n", firstName, middleName, lastName, userName);
                fclose(pFile);
            }
            else
            {
                printf("File ERROR\n");
                break;
            }

            clear_Input();
        }
    }
    
    printf("Exiting Program\n\n");
    return 0;
}

// Resets input cache
int clear_Input()
{
    while (getchar() != '\n');
}