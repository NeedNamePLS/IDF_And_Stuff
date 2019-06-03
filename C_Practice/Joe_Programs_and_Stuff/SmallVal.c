#include <stdio.h>

int clear_input();

int main()
{
    int temp, size;

    // Prompt user to set a size for the array
    printf("\nInput size for an array between 1 and 10\n");
    scanf("%d", &size);
    clear_input();
    
    //Keeps repeatng until user puts a valid size for the array
    if (size < 1 || size > 10)
    {
        while (size < 1 || size > 10)
        {
            printf("Invalid input. Array size must be between 1 and 10\n");
            printf("\nInput size for an array\n");
            scanf("%d", &size);
            clear_input();
        }
    }

    int aah[size];

    // Prompt user to fill the array
    printf("Input values to be entered in the array\n");

    for (int i = 0; i < size; i++)
    {
        printf("Input [%d]: ", i+1);
        scanf("%d", &temp);
        clear_input();
        aah[i] = temp;
    }

    // Basic way of determining the smallest value in the array
    if (size == 1)
    {
        printf("The smallest value in the array is the only value: %d", aah[0]);
    }
    else
    {
        temp = aah[0];

        for (int i = 0; i < size-1; i++)
        {
            // If temp is less than the next value, do nothing
            if (temp < aah[i+1])
            {
                
            }
            // Else it will set temp to equal the lower value
            else
            {
                temp = aah[i+1];
            }
        }
        printf("The smallest value is %d", temp);
    }
}

//Clears stdin
int clear_input()
{
   while(getchar() != '\n');
}