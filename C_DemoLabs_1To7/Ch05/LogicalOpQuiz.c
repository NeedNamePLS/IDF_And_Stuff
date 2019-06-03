/*
*Program: Logical Operator Math Quiz
*Programmer: Jonathan A. Butler
*Date: 05 Feb 2019
*Description: More Math with And/Or/Not stuff
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    // Variables ready to be mathed
    int x = 99;
    int y = 0;

    // x && y
    printf("%d\n", x && y);
    // y || x
    printf("%d\n", y || x);
    // !y
    printf("%d\n", !y);
    // y && 0
    printf("%d\n", y && 0);
    // x || 42
    printf("%d\n", x || 42);
    // !x
    printf("%d\n", !x);
    // x && x
    printf("%d\n", x && x);
    // y || y
    printf("%d\n", y || y);
    // !1
    printf("%d\n", !1);
    // 1 && 1
    printf("%d\n", 1 && 1);
    // (0 && 1) || (2 && 3)
    printf("%d\n", (0 && 1) || (2 && 3));

    return 0;
}