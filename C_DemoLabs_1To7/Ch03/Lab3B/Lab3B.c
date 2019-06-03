/*************************
 * 
 * Name: Jonathan Butler
 * Date: 30 Jan 2019
 * Program: Lab3A
 * Description: Whispers me the truth and stuff
 * 
 * ***********************/
#include <stdio.h>

int main(void)
{
    //Makes a array and prints it
    char theWord[256] = {0};
    theWord[0] = 'B';
    theWord[1] = 'I';
    theWord[2] = 'R';
    theWord[3] = 'D';
    theWord[255] = '\0';

    printf("%s is the word.", theWord);

    return 0;
}