/*************************
 * 
 * Name: Jonathan Butler
 * Date: 30 Jan 2019
 * Program: Lab3A
 * Description: Whispers me the truth and stuff
 * 
 * ***********************/
#include <stdio.h>

int main(void)
{
    // Don't know why the program didn't want to work until I put the Y in the array
    // Set up a char and int array and systematically fill the int array with various values
    char favQuote[9] = {'Y','S','A','D','N','E','S','S','\0'};
    int studentAges[16] = {0};
    studentAges[0] = 8;
    studentAges[1] = 15;
    studentAges[2] = 16;
    studentAges[3] = 17;
    studentAges[4] = 18;
    studentAges[5] = 19;
    studentAges[6] = 20;
    studentAges[7] = 21;
    studentAges[8] = 22;
    studentAges[9] = 23;
    studentAges[10] = 24;
    studentAges[11] = 25;
    studentAges[12] = 26;
    studentAges[13] = 27;
    studentAges[14] = 28;
    studentAges[15] = 101;

    // For loop to easily print out the char array each index at a time
    for (int i = 1; i < 8; i++)
    {
        printf("%c", favQuote[i]);
    }

    printf("\n");
    // The instructor is very self conscious about his age and mental maturity
    printf("Age of instructor is atleast %d \n", studentAges[0]);

    // Another for loop but for the int array
    for (int i = 1; i < 16; i++)
    {
        printf("Age of a student is %d \n", studentAges[i]);
    }

    //printf("\n");

    return 0;
}
