#include <stdio.h>                           // Standard IO header

//Flag Stuff
int main(void)
{
float someNum = 12.3456;                    // Var used as comparison

printf("Default: \n%f\n\n", someNum);                     // 12.345600
printf("Default * Negative: \n%f\n\n", someNum * -1.0);              // -12.345600
printf("Prefix to Positive: \n%+f\n\n", someNum);                    // +12.345600
printf("Prefix to Positive * Negative: \n%+f\n\n", someNum * -1.0);             // -12.346000
printf("Space: \n% f\n\n", someNum);                    //  12.345600
printf("Space * Negative: \n% f\n\n", someNum * -1.0);             // -12.345600    
printf("Left Justified: \n%-f\n\n", someNum);                    // 12.345600  
printf("Left Justified * Negative: \n%-f\n\n", someNum * -1.0);             // -12.345600  
printf("Leading Zeros: \n%0f\n\n", someNum);                    // 12.345600  
printf("16 Leading Zeros: \n%016f\n\n", someNum);                  // 000000012.345600

return 0;
}