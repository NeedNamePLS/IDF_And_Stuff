#include <stdio.h>

//Flag Stuff 2
int main(void)
{
    printf("#1 %f\n", 1.2); // Default
    printf("#2 %+8.4f\n", -1.798); // Prefixed to positive number with 4 decimal places
    printf("#3 % 7.2f\n", 0.987654321); // 7 Spaces with 2 decimal places
    printf("#4 %-6.1f is yours\n", 13.37); // left-justified with 1 decimal place
    printf("#5 Yours is %05.2f\n", 1.2345); // 5 leading zeros with 2 decimal places but can only hold 5 characters
    printf("#6 %s\n", "Hello World!\0"); // 
    printf("#7 %9.5s\n", "Hello world!\0"); // 
    printf("#8 %016.11s\n", "Hello world!\0"); // 
}