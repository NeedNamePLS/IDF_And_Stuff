#include <stdio.h>
#include <string.h>

int main()
{
    const char *caesar[12];
    char placeholder;
    int temp, numeral;


    //Test
    for (numeral = 0; numeral < 3999; numeral++)
    {
        temp = numeral;

        while (temp > 0)
        {
            // Checks to see if value is 100 or greater but less than 4000 then prints the Roman version of 1000
            if (temp > 999 && temp < 4000)
            {
                //printf("M");
                //caesar[numeral] += "M";
                strcat(placeholder, "M");
                temp -= 1000;
            }
            // Checks to see if value is 900 or greater but less than 1000 then prints Roman version of 900
            if (temp > 899 && temp < 1000)
            {
                //printf("CM");
                //caesar[numeral] += "CM";
                strcat(placeholder, "CM");
                temp -= 900;
            }
            // Checks to see if value is 500 or greater but less than 900 then prints the Roman version of 500
            if (temp > 499 && temp < 900)
            {
                //printf("D");
                // caesar[numeral] += "D";
                temp -= 500;
            }
            // Checks to see if value is 400 or greater but less than 500 then prints the Roman version of 400
            if (temp > 399 && temp < 500)
            {
                //printf("CD");
                //caesar[numeral] += "CD";
                temp -= 400;
            }
            // Checks to see if value is 100 or greater but less than 400 then prints the Roman version of 100
            if (temp > 99 && temp < 400)
            {
                //printf("C");
                //caesar[numeral] += "C";
                temp -= 100;
            }
            // Checks to see if value is 90 or greater but less than 100 then prints Roman version of 90
            if (temp > 89 && temp < 100)
            {
                //printf("XC");
                //caesar[numeral] += "XC";
                temp -= 90;
            }
            // Checks to see if value is 50 or greater but less than 90 then prints the Roman version of 50
            if (temp > 49 && temp < 90)
            {
                //printf("L");
                //caesar[numeral] += "L";
                temp -= 50;
            }
            // Checks to see if value is 40 or greater but less than 50 then prints the Roman version of 40
            if (temp > 39 && temp < 50)
            {
                //printf("XL");
                //caesar[numeral] += "XL";
                temp -= 40;
            }
            // Checks to see if value is 10 or greater but less than 40 then prints the Roman version of 10
            if (temp > 9 && temp < 40)
            {
                //printf("X");
                //caesar[numeral] += "X";
                temp -= 10;
            }
            // Checks to see if value is 9 then prints the Roman version of 9
            if (temp == 9)
            {
                //printf("IX");
                //caesar[numeral] += "IX";
                temp -= 9;
            }
            // Checks to see if value is 5 or greater but less than 10 then prints the Roman version of 5
            if (temp > 4 && temp < 10)
            {
                //printf("V");
                //caesar[numeral] += "V";
                temp -= 5;
            }
                // Checks to see if value is 4 then prints the Roman version of 4
            if (temp == 4)
            {
                //printf("IV");
                //caesar[numeral] += "IV";
                temp -= 4;
            }
            // Checks to see if value is 1 or greater and less than 4 then prints the Roman version of 1
            if (temp > 0 && temp < 4)
            {
                //printf("I");
                //caesar[numeral] += "I";
                temp -= 1;
            }
        }// End of While Loop
    }

    printf("%s\n", caesar[1000]);
}