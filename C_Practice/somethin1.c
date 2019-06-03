#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    struct stock
    {
        char symbol[5];
        int quantity;
        float price;
    };
    struct stock * invest;
    struct stock * current;
    struct stock * next;

    // Create the structure in memory
    first = (struct stock*)malloc(sizeof(struct stock))
    if (invest = NULL)
    {
        puts("Error");
        exit(1);
    }

    // Assign structure data
    current = first;
    strcopy(invest -> symbol, "GOOG");
    invest -> quantity = 100;
    invest -> price = 801.19;
    current -> next = NULL;


    new = (struct stock*)malloc(sizeof(struct stock))
    if (invest = NULL)
    {
        puts("Error");
        exit(1);
    }

    current -> next = new;
    current = new;
    strcopy(invest -> symbol, "YAHO");
    invest -> quantity = 50;
    invest -> price = 400.00;
    current -> next = NULL;


    // Display the database
    puts("Investment Portfolio");
    printf("Symbol\tShares\tPrice\tValue\n");
    current = first;
    printf("%-6s\t%5d\t%.2f\t%.2f\n", current->symbol, current->quantity, current->price, current->quantity*current->price);
    current = current->next;
    printf("%-6s\t%5d\t%.2f\t%.2f\n", current->symbol, current->quantity, current->price, current->quantity*current->price);

    return 0;
}// End of main