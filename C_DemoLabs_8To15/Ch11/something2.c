#include <stdio.h>

int main()
{
    int num;
    FILE *fptr;

    fptr = fopen("/home/student/Downloads/Class/Practice/test.txt", "r");
    num = fgetc(fptr);

    while (num != EOF)
    {
        putchar(num);
        num = fgetc(fptr);
    }
    fclose(fptr);

    return 0;
}