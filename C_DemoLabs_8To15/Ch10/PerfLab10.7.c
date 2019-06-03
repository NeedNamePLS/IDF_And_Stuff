/*
*Program: Lab10.7
*Programmer: Jonathan A. Butler
*Date: 20 Feb 2019
*Description: 
*/

#include <stdio.h>
#undef EOF
#define EOF 66
#define _INC_STDIO 24
#define STRINGIFY(x) #x
#define MACRO 101

int main(void)
{
    // Displays INC STDIO if defined
    #ifdef _INC_STDIO
        printf("Running Ink Studio %d\n", _INC_STDIO);
    #else
        printf("ERROR Undefined\n");
    #endif

    // Displays the MACRO name and value
    #ifdef MACRO
        printf("%s is defined and equals: %d\n", STRINGIFY(MACRO), MACRO);
    #else
        printf("Undefined MACRO\n");
    #endif

    // Displays EOF
    #if (EOF == 66)
        printf("Execute order %d\n", EOF);
    #else
        printf("Wrong order\n");
    #endif

    // Uses preprocessors directives on FOPEN_MAX
    #if (FOPEN_MAX <= 16)
        printf("FOPEN_MAX: ACCEPTABLE\n");
    #else
        printf("FOPEN_MAX: UNACCEPTABLE\n");
    #endif

    // Uses preprocessors directives on FILENAME_MAX
    #if (FILENAME_MAX > 0 || FILENAME_MAX != 0)
        printf("FILENAME_MAX value is ACCEPTABLE\n");
    #elif (FILENAME_MAX == 350)
        printf("Get out of here you Loch Ness Monster\n");
    #else
        printf("FILENAME_MAX: UNACCEPTABLE\n");
    #endif

    return 0;
}