/*
*Program: PLab13.1
*Programmer: Jonathan A. Butler
*Date: 26 Feb 2019
*Description: 
*/

#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
    //TODO: Create a string containing your first name
    char name[] = "Jonathan";

    //TODO: Get the size of this string
    int size = strlen(name);

    //TODO: Declare a char pointer *str
    char *str;

    //TODO: Allocate a section of memory of type char
    //TODO: Set the size of this allocated space to 40 bytes
    //TODO: Asign the address of this allocated space to the pointer value
    str = (char*)malloc(40);

    //TODO: Copy your name into the allocated space using strcpy()
    strcpy(str, name);

    //TODO: Print out your name that is stored in the allocated memory space
    printf("Stored string: %s\n", str);

    //TODO: Reallocate the memory space using the size of the string rather than 40 bytes
    str = realloc(str, size);

    //TODO: Print out the string again
    printf("Reallocated string: %s\n", str);

    return 0;
}