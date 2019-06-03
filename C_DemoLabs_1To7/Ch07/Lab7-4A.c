/*
*Program: Lab7.4A
*Programmer: Jonathan A. Butler
*Date: 08 Feb 2019
*Description: Continue?
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    unsigned int x = 0;
    int counter = 0;

    do
    {
        counter = 0;
        printf("Type a number below 1000 pls: ");
        scanf("%d", &x);

        if (x > 999)
        {
            printf("Why are you like this...");
            break;
        }

        for (int i = 1; i <= x; i++)
        {
            if ((x%i) == 0 && counter < 10)
            {
                printf("%d ", i);
                counter++;
            }
            else if (counter >= 10)
            {
                break;
            }
        }

        printf("\n");
    }
    while (x <= 999);

    return 0;
}