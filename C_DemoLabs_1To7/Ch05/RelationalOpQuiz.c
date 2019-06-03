/*
*Program: Relational Operator Math Quiz
*Programmer: Jonathan A. Butler
*Date: 05 Feb 2019
*Description: More Math
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    // Variables ready to be mathed
    int x = 2;
    int y = 6;

    // y < x
    printf("%d\n", y < x);
    // y <= x
    printf("%d\n", y <= x);
    // y > x
    printf("%d\n", y > x);
    // y >= x
    printf("%d\n", y >= x);
    // y == x
    printf("%d\n", y == x);
    // y != x
    printf("%d\n", y != x);
    // 2 == y
    printf("%d\n", 2 == y);
    // 6 != x
    printf("%d\n", 6 != x);
    // 6 >= 2
    printf("%d\n", 6 >= 2);
    // 2 < 6
    printf("%d\n", 2 < 6);
    // x != y != 3 >= x
    printf("%d\n", x != y != 3 >= x);

    return 0;
}