#include <stdio.h>

int main (void)
{
    int classTotal = 0, gradeCounter = 1, pass = 0, fail = 0; 
    int studentTotal, temp;

    printf("Grades can only be set from a range of 0 to 100\nAny inputed amount outside that range will be set to the closest allowed amount\n\n");
    printf("How many students have taken the test: ");
    scanf("%d", &studentTotal);

    while (gradeCounter <= studentTotal)
    {
        printf("Enter result of Student %d: ", gradeCounter);
        scanf("%d", &temp);
        // Sets the maximum and minimum test result
        if (temp > 100)
        {
            temp = 100; // Use temp to temporarily hold the grade to be used
        }
        else if (temp < 0)
        {
            temp = 0;
        }
        // Counts how many pass or failed the test
        if (temp >= 70)
        {
            pass++;
        }
        else
        {
            fail++;
        }
        classTotal += temp; // Adds the grade to the class's total grade
        gradeCounter++;
    }

    printf("\nThe class average is: %d\n", (classTotal / studentTotal)); // Gets the average grade by dividing the total grade with the number of students
    printf("%d Students passed\n", pass);
    printf("%d Students failed\n", fail);
    
    if (pass >= 8)
    {
        printf("Bonus to Instructor for atleast 8 students passed, thats a win in my book.");
    }

    return 0;
}