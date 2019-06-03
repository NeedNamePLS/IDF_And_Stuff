#include <stdio.h>

int EvenOdd(int x);
int clear_input();

int main()
{
    int input, loops, theBool = 0;

    printf("How many numbers do you wanna check [Number 1 to 10]: ");
    scanf("%d", &loops);
    clear_input();

    while(loops < 1 || loops > 10)
    {
        printf("What did I just say...\n");
        printf("How many numbers do you wanna check [Number 1 to 10]: ");
        scanf("%d", &loops);
        clear_input();
    }
    
    printf("Input a number to have its gender assumed [Number above 0]\n");

    for (int i = 0; i < loops; i++)
    {
        printf("Number [%d]: ", i+1);
        scanf("%d", &input);
        clear_input();

        while(input < 1)
        {
            printf("Input a number to have its gender assumed [Number above 0]\n");
            printf("Number [%d]: ", i+1);
            scanf("%d", &input);
            clear_input();
        }

        theBool = EvenOdd(input);

        if(theBool == 1)
        {
            printf("%d is Even\n", input);
        }
        else
        {
            printf("%d is Odd\n", input);
        }
    }
}

int EvenOdd(int x)
{
    if(x%2== 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//Clears stdin
int clear_input()
{
   while(getchar() != '\n');
}