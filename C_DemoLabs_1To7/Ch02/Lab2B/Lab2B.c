/* Program converts variable types
*
* name: Jonathan Butler
* date: 29 Jan 2019
* project: Lab2B
*
*/

#include <stdio.h>

int main(void)
{
int intNumber = 77;
float fltNumber = 88;
double dblNumber = 99.1;
char chrNumber = 'W';

// Casting various variables as other variable types
printf("intNumber: %d cast as a float: %f \n", intNumber, (float) intNumber);
printf("intNumber: %d cast as a char: %c \n", intNumber, (char) intNumber);
printf("fltNumber: %f cast as a double: %lf \n", fltNumber, (double) fltNumber);
printf("dblNumber: %lf cast as a float: %f \n", dblNumber, (float) dblNumber);
printf("chrNumber: %c cast as a int: %d \n", chrNumber, (int) chrNumber);
printf("the number 33 cast as a char: %c \n", (char) 33);

return 0;
}