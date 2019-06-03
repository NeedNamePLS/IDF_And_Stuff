#include <stdio.h>

//
int main(void)
{
char testerino[17] = {0};
int month = 0;
int day = 0;
int year = 0;

//Read user input and displays it
//Holds upto 16 characters, and stops reading on capital letter and/or new line
printf("Input soemthing:\n");
scanf("%16[^A-Z\n]s\n", &testerino);
printf("Test: %s\n", testerino);

//
printf("Insert a month <mm>: ");
scanf("%d", &month);
printf("Insert a day <dd>: ");
scanf("%d", &day);
printf("Insert a year <yyyy>: ");
scanf("%d", &year);
printf("%02d/%02d/%04d", month, day, year);
//printf("Insert a date in this format <mm>-<dd>-<yyyy>: ", )
}