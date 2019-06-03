#include <stdio.h>

int main(void)
{
    float numbers[10] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
    float * nPTR[] = {numbers};

    for (int i = 0; i < 10; i++)
    {
        printf("%.1f ", numbers[i]);
    }
    printf("\n");

    
}