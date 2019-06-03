/*
*Program: Linked List
*Programmer: Jonathan A. Butler
*Date: 27 Feb 2019
*Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "DisplayNodes.c"
#include "DisplayNodes.h"

int main(void)
{
    int userChoice;

    node_t * Student1 = (node_t*)malloc(sizeof(node_t));
    node_t * Student2 = (node_t*)malloc(sizeof(node_t));
    node_t * Student3 = (node_t*)malloc(sizeof(node_t));
    node_t * Student4 = (node_t*)malloc(sizeof(node_t));
    node_t * Student5 = (node_t*)malloc(sizeof(node_t));

    strcpy(Student1->studentName, "Grant");
    strcpy(Student1->studentInitials, "GMO?");
    strcpy(Student1->favArtist, "Country Hick");
    strcpy(Student1->dreamyCar, "Anything Tesla");
    Student1->next_node = Student2;

    strcpy(Student2->studentName, "Jared");
    strcpy(Student2->studentInitials, "JOY?");
    strcpy(Student2->favArtist, "Justin Bieber");
    strcpy(Student2->dreamyCar, "Pink Mitsubishi");
    Student2->next_node = Student3;
    
    strcpy(Student3->studentName, "Jonathan");
    strcpy(Student3->studentInitials, "JAB");
    strcpy(Student3->favArtist, "Yes");
    strcpy(Student3->dreamyCar, "Yes");
    Student3->next_node = Student4;
    
    strcpy(Student4->studentName, "Onawa");
    strcpy(Student4->studentInitials, "OIL?");
    strcpy(Student4->favArtist, "Don't know");
    strcpy(Student4->dreamyCar, "Don't know");
    Student4->next_node = Student5;
    
    strcpy(Student5->studentName, "Kurtis");
    strcpy(Student5->studentInitials, "KLM");
    strcpy(Student5->favArtist, "Punk/Edgy");
    strcpy(Student5->dreamyCar, "Whichever is more likely to explode");
    Student5->next_node = NULL;

    printf("Welcome to the student record\nTo display all data, enter 1\nTo display all students and a single type of info about them, enter 2\nTo display all data of a single student, enter 3\n");
    printf("User Input: ");
    scanf("%d", &userChoice);
    clear_Input();

    switch(userChoice)
    {
        case 1:
            displayAllStudents(Student1);
            break;
        case 2:
            printf("Which info do you wish to display?\n| 1: Initials | 2: Favorite Artist | 3: Dream Vehicle | Access: ");
            scanf("%d", &userChoice);
            clear_Input();
            displayOneEach(Student1, userChoice);
            break;
        case 3:
            printf("Which student do you wish to display?\n");
            printf("| 1: Grant | 2: Jared | 3: Jonathan | 4: Onawa | 5: Kurtis | Access: ");
            scanf("%d", &userChoice);
            clear_Input();
            // Doesn't like Switch statements within Switch statements so I used If Else instead
            if (userChoice == 1)
            {
                displayOneStudent(Student1);
            }
            else if (userChoice == 2)
            {
                displayOneStudent(Student2);
            }
            else if (userChoice == 3)
            {
                displayOneStudent(Student3);
            }
            else if (userChoice == 4)
            {
                displayOneStudent(Student4);
            }
            else if (userChoice == 5)
            {
                displayOneStudent(Student5);
            }
            break;
        default:
            printf("You think you're funny? Well you ain't so try again...\n");
            break;
    }
}