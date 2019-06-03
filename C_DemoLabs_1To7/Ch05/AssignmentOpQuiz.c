/*
*Program: Assignment Operator Math Quiz
*Programmer: Jonathan A. Butler
*Date: 05 Feb 2019
*Description: More Math with Assignment Operators
*/

#include <stdio.h>
#include <math.h>

void why();

int x = 9;
int y = 3;

int main(void)
{

    // Variables ready to be mathed

    //No idea what things are suppose to be anymore
    // #1: -27
    printf("%d\n", x *- y);
    why();
    // #2: 3
    printf("%d\n", x /= y);
    why();
    // #3: 6
    printf("%d\n", x %= y);
    why();
    // #4: 12
    printf("%d\n", x += y);
    why();
    // #5: 6
    printf("%d\n", x -= y);
    why();
    // #6: 28
    printf("%d\n", x *= ++y);
    why();
    // #7: 3
    printf("%d\n", x /= y--);
    why();
    // #8: 1
    printf("%d\n", x %= --x);
    why();
    // #9: 11
    printf("%d\n", x += --y);
    why();
    // #10: 6
    printf("%d\n", x -= y++);
    why();
    // #11: ???
    printf("%d\n", (y %= y) || (x /= x--));

    return 0;
}

//I dont like this but doing it anyway
void why()
{
    x = 9;
    y = 3;
}