#include <stdio.h>

int main(void)
{
// first
int computerScienceCourses [5] = {1003, 1023, 1033, 1063, 1073};

// second
float studentGPAs [7] = {2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55};

// third
char cardinalDirections [4] = {0, 1, 2, 3};

// fourth
char catchPharse [10] = {76, 101, 103, 101, 111};


printf("\n Blank \n");
for (int i = 0; i < 10; i++)
{
    printf("Test %d is %f.\n", i + 1, studentGPAs[i]);
}
}