//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct
typedef struct Student_Linky_List
{
    char studentName[12];
    char studentInitials[4];
    char favArtist[64];
    char dreamyCar[64];
    struct Student_Linky_List * next_node;
}node_t;

// Prints each node in the struct
extern void displayAllStudents(node_t*n)
{
    while (n != NULL)
    {
        printf("\n%s | %s:\nFavorite Artist: %s\nDream Vehicle: %s\n",n->studentName , n->studentInitials, n->favArtist, n->dreamyCar);
        n = n->next_node;
    }
}

// Prints each node in the struct
extern void displayOneEach(node_t*n, int choice)
{
    switch(choice)
    {
        case 1:
            while (n != NULL)
            {
                printf("\n%s: %s\n",n->studentName , n->studentInitials);
                n = n->next_node;
            }
            break;
        case 2:
            while (n != NULL)
            {
                printf("\n%s: %s\n",n->studentName , n->favArtist);
                n = n->next_node;
            }
            break;
        case 3:
            while (n != NULL)
            {
                printf("\n%s: %s\n",n->studentName , n->dreamyCar);
                n = n->next_node;
            }
            break;
        default:
            printf("You think you're funny? Well you ain't so try again...\n"); // Looping through this is wierd
            break;
    }
}

extern void displayOneStudent(node_t*n)
{
    printf("\n%s | %s:\nFavorite Artist: %s\nDream Vehicle: %s\n",n->studentName , n->studentInitials, n->favArtist, n->dreamyCar);
}

// Resets input cache
extern int clear_Input()
{
    while (getchar() != '\n');
}