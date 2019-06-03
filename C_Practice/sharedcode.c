#include <stdio.h>

int main(void)
{
    // gets(youngsCreditNumber); // Old Code
    // printf("%d", youngsCreditNumber); // Old Code

    // Soulution from Young: Hardcode the info in
    // 1234-5678-9123-4567
    // CVV: 123
    // Exp Date: 4/20
    int counter = 0;
    int youngsCreditNumber[16] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7};
    int youngsCVV = 123;
    char youngsExpDate[5] = {"04/20"};

    printf("\n|Young's credit card information|\n\n");
    printf("Card Number: ");

    for (int i = 0; i < 16; i++)
    {
        printf("%d", youngsCreditNumber[i]);
        counter++;
        if (counter == 4 && i != 15) // Add the dash in between the numbers and not print it at the end
        {
            printf("-");
            counter = 0;
        }
    }

    printf("\nCredit Card CVV: %d", youngsCVV);
    printf("\nCard Experation Date: %s\n\n", youngsExpDate);
    printf("https://www.amazon.com/"); // Where you should go after running this program
    printf("\n\nHappy shopping!\n\n"); // Because we are polite

    return 0;
}