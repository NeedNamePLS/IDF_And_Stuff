/*
*Program: Walk the String
*Programmer: Jonathan A. Butler
*Date: 1 Mar 2019
*Description: 
*/

#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _DEBUG
#define NDEBUG
#endif

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define BUF_SIZE 16

int main(void)
{
    char * theArray;

    theArray = (char *)calloc(BUF_SIZE, sizeof(char));

    printf("Enter a string: ");
	assert(theArray);			

    #ifdef doit
	fgets(theArray, BUF_SIZE, stdin);
    #else
	scanf("%s", theArray);
    #endif

	assert(theArray[BUF_SIZE - 1] == '\0');
    printf("You typed in %s\n", theArray);
	//puts(theArray);

	return 0;
}