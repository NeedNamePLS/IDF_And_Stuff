/*
*Program: Lab5A
*Programmer: Jonathan A. Butler
*Date: 05 Feb 2019
*Description: Like so much math
*/

#include <stdio.h>
#include <math.h>

int main(void) 
{
    //Variables ready to become a metaphoric triangle
    int x = 0;
    int y = 0;
    double z = 0;

    //For some reason linux didnt want to connect to the math library for this Lab and waste like 20 minutes of my life...
    printf("Input a length for leg A then input a length for leg B: \n");
    scanf("%d\t%d", &x, &y);

    //Makes sure they dont put something dumb
    if (x > 0 && y > 0)
    {
        z = (x * x) + (y * y);
        printf("The hypotenuse of this triangle is %lf\n", sqrt(z));
    }
    else
    {
        printf("(╯°□°）╯︵ ┻━┻\nWhy are you like this...\n");
    }

    return 0;
}