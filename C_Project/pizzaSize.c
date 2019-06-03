#include <stdio.h>

// Pizza size
extern char * sizza()
{
    int choice = 0;
    char *pizzaSize;

    printf("\n[PIZZA SIZES]\n");
    printf("|Personal[1]:  8\"|\n|Small   [2]: 10\"|\n|Medium  [3]: 12\"|\n|Large   [4]: 14\"|\n|X-Large [5]: 16\"|\n|Murica  [6]: 24\"|\n");
    printf("Select your size: ");
    scanf("%s", &choice);

    if (choice < 49 || choice > 54)
    {
        printf("Error in input\nRestarting size selection\n");
        sizza();
    }
    else
    {
        switch(choice)
        {
            case 49:
                pizzaSize = "8\"";
                break;
            case 50:
                pizzaSize = "10\"";
                break;
            case 51:
                pizzaSize = "12\"";
                break;
            case 52:
                pizzaSize = "14\"";
                break;
            case 53:
                pizzaSize = "16\"";
                break;
            case 54:
                pizzaSize = "24\"";
                break;
            default:
                break;
        }
        return pizzaSize;
    }
}