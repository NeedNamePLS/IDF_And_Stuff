/*
*Program: Lab7.3A
*Programmer: Jonathan A. Butler
*Date: 08 Feb 2019
*Description: For Loop and making old code less ugly-ish
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int myIntArray[10] = {0};

	// myIntArray[0] = 100;
 	// myIntArray[1] = 100;
 	// myIntArray[2] = 100;
 	// myIntArray[3] = 100;
 	// myIntArray[4] = 100;

    for (int i = 0; i < 10; i++)
    {
        myIntArray[i] = 100;
    }

	float myFloatArray[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	char myCharArray[256] = {0};

	// END INIT ARRAYS

	int index = 0;

	printf("%d \n", myIntArray[2]);
	printf("%f \n", myFloatArray[2]);
	printf("%c \n", myCharArray[2]);

    // myIntArray[y] = (y + 1) * 10;

    for (int i = 0; i < 10; i++)
    {
        myIntArray[i] = (i + 1) * 10;
    }

	// myFloatArray[0] = myFloatArray[0] * 1.1;

    for (int i = 0; i < 5; i++)
    {
        myFloatArray[i] = myFloatArray[i] * 1.1;
    }

	myCharArray[0] = 'H';
	myCharArray[1] = 'E';
	myCharArray[2] = 'L';
	myCharArray[3] = 'P';

	printf("%d \n", myIntArray[2]);
	printf("%f \n", myFloatArray[2]);
	printf("%c \n", myCharArray[2]);

	return 0;
}