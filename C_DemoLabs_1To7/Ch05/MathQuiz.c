/*
*Program: Math Quiz
*Programmer: Jonathan A. Butler
*Date: 05 Feb 2019
*Description: Displays alot of math
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    //Variables ready to be mathed
    int x = 7;
    int y = 4;
    float z = 0;

    //The mathematician performing math magic

    // x * y
    printf("%d multiplied by %d equals %d\n", x, y, x*y); //Multiplication

    // z = x / y
    printf("%d divided by %d equals %f\n", x, y, z=x/y); //Division

    // x % y
    printf("%d modulo divided by %d equals %d\n", x, y, x%y); //Modulo Division

    // y + x
    printf("%d plus %d equals %d\n", y, x, x+y); //Addition

    // y - x
    printf("%d minus %d equals %d\n", y, x, y-x); //Subtraction

    // -y
    printf("Negative of %d is %d\n", y, -y); //Negative

    // ++x
    printf("Increment before evaluation of %d is %d\n", x, ++x); //Increment before evaluation

    // y++
    printf("Increment after evaluation of %d is %d\n", y, y++); //Increment after evaluation

    // x--
    printf("Decrement after evaluation of %d is %d\n", x, x--); //Decrement after evaluation

    // --y
    printf("Decrement before evaluation of %d is %d\n", y, --y); //Decrement before evaluation

    // 1 + 2 * (3 + y) + 5
    printf("1 + 2 * (3 + %d) + 5 = %d\n", y, 1+2*(3+y)+5); //Math

    return 0;
}