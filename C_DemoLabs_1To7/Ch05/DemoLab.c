#include <stdio.h>
#include <math.h>

int main(void)
{
    //Variables ready to be mathed
    int x = 7;
    int y = 4;
    float z = 0;

    //The mathematician performing math magic

    z = x*y;
    printf("%d * %d = %f\n", x, y, z); //Multiplication

    z = x/y;
    printf("%d / %d = %f\n", x, y, z); //Division

    z = x % y;
    printf("%d % %d = %f\n", x, y, z); //Modulo Division

    z = x + y;
    printf("%d + %d = %f\n", x, y, z); //Addition

    z = x - y;
    printf("%d - %d = %f\n", x, y, z); //Subtraction

    z = -y;
    printf("%d * %d = %f\n", x, y, z); //Negative


    return 0;
}