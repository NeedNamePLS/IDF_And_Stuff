/* Bless A1C Grant Ogden */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_ARRAY 100
#define NUMBER_LIMIT 150
#define SEARCHES 100

void fillAryOrerd  (int array[]);
bool ordListSearch (int  array[], int  last,
                    int  target, 
                    int* locn,    int* tests);
bool binarySearch (int array[],int numOfElements,int target,int* index,int *tests);

int main (void)
{
	int locn;
	int array [MAX_ARRAY];
    int numSearches = 0;
    int numSuccess = 0;
    float perSuccess = 0.0;
    float averageNumTests = 0;
    int tests;

	srand (time (NULL));
	fillAryOrerd (array);
    for (size_t i = 0; i < SEARCHES; i++)
    {
        if(binarySearch(array,MAX_ARRAY,rand() % NUMBER_LIMIT + 1,&locn,&tests)){
            numSuccess++;
        }
    }
    printf("Number Of Searches: %d\n",SEARCHES);
    printf("Number Of Successes: %d\n",numSuccess);
    printf("Percentage of Success: %f\n", ((float)numSuccess/(float)SEARCHES) *100);
    printf("Average Number of Tests: %f\n",(float)tests/(float)SEARCHES);



	return 0;
}	// main

void fillAryOrerd (int array [ ])
{
//	Local Definitions 
	int i    =  0;
	int num  =  1;

//	Statements
	while (i < MAX_ARRAY)
	   {
	    array[i]  =  num;
	    i++;
	    num      +=  2;
	    array[i]  =  num;
	    i++;
	    num++;
	   } // while 
	return;
}	// fillAryOrerd


bool binarySearch (int array[],int numOfElements,int target,int* index,int* tests){
    int L = 0;
    int R = numOfElements - 1;
    int m;
    while(L <= R){
        m = (L + R) / 2;
        (*tests)++;
        if(array[m] > target){
            R = m - 1;
        }
        else if(array[m] < target){
            L = m + 1;
        }
        else{
            *index = m;
            return true;
        }
    }
    return false;
}