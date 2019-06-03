/*
*Program: Lab11
*Programmer: Jonathan A. Butler
*Date: 21 Feb 2019
*Description: 
*/

#include <stdio.h>

int main(void)
{

    printf("\n\n########## CREATING VARIABLES ##########\n");
    // TODO: Declare and Initilize three variables:
    int randomNum = 24;
    float floatyArray[5] = {1.0, 2.1, 3.2, 4.3, 5.4};
    char favFood[] = {"tidepods"};
    printf("Complete\n");

    printf("\n\n########## CREATING POINTERS ##########\n");
    // TODO: Create pointers and point to each of the above variables
    int *numRandom = &randomNum;
    float *arrayFloaty[] = {floatyArray};
    char *foodFav[] = {favFood};
    printf("Complete\n");

    printf("\n\n########## PRINTING ADDRESSES OF POINTERS ##########\n");
    // TODO: Print out the addresses of the three pointers
    printf("numRandom Address: %p\n", &numRandom);
    printf("arrayFloaty Address: %p\n", arrayFloaty);
    printf("foodFav Address: %p\n", foodFav);
    printf("Complete\n");

    printf("\n\n########## PRINTING POINTERS VALUES ##########\n");
    // TODO: Print out the values of the three pointers (the addresses they are holding)
    printf("");
    printf("Complete\n");

    printf("\n\n########## PRINTING DEREFERENCED VALUES ##########\n");

    printf("\n\n========== INT POINTER ==========\n");
    // TODO: Print out the dereferenced value of the pointer that points to the int


    printf("\n\n========== INT ARRAY POINTER ==========\n");
    // TODO: Print out the dereferenced values of the int array using it's pointer


    printf("\n\n========== STRING POINTER ==========\n");
    // TODO: Print out the dereferenced value of the char array using it's pointer


    printf("\n\n########## MODDING VARS VIA POINTERS ##########\n");
    // Using the pointers, perform the actions below::::::::::
    // Temp values (where instructed) can be created and modified normally

    // TODO: Save the current value in a temp var

    // TODO: Set the value of the int to 0

    // TODO: Divide the temp value by 2 and place the result into the int variable

    // TODO: Print the int var... what it was before and what it is now.



    // TODO: Print out the int array... one element per line.

    // TODO: Store the int array values into a temp array

    // TODO: Zeroize the int array

    // TODO: Place the values from temp array back into int array... backwards
    // EX: {1,2,3,4,5} becomes {5,4,3,2,1}

    // TODO: Print out the int array



    // TODO: Print out the string

    // TODO: Manually get the string length (no strlen())

    // TODO: Overwrite the string in place, capitalizing each letter

    // TODO: Store the string into a temp array

    // TODO: Reverse the string and store it back into the char array

    // TODO: Print out the string


    printf("\n\n\n\n!!!!!!!!!!!!!!!!! PROGRAM END !!!!!!!!!!!!!!!!!!\n\n");


    getchar();
    getchar();
    return 0;
}