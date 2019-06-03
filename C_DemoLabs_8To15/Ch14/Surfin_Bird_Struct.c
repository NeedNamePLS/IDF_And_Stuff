/*
*Program: Surfin Struct
*Programmer: Jonathan A. Butler
*Date: 27 Feb 2019
*Description: 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Error code default value */
#ifdef DEFAULT_ERROR_CODE
#undef DEFAULT_ERROR_CODE
#endif
#define DEFAULT_ERROR_CODE 90318

/* Just in case NULL was undefined... */
#ifndef NULL
#define NULL ((void*) 0)
#endif

/* Error code for success */
#ifdef ERROR_CODE_SUCCESS
#undef ERROR_CODE_SUCCESS
#endif
#define ERROR_CODE_SUCCESS ((int)1)

/* Error code if sentence_ptr is NULL */
#ifdef ERROR_NULL_SENTENCE_POINTER
#undef ERROR_NULL_SENTENCE_POINTER
#endif
#define ERROR_NULL_SENTENCE_POINTER ((int)-1)

/* Error code if searchWord is NULL */
#ifdef ERROR_NULL_SEARCH_POINTER
#undef ERROR_NULL_SEARCH_POINTER
#endif
#define ERROR_NULL_SEARCH_POINTER ((int)-2)

/* Error code is the string in searchWord can not be found in the string located at sentence_ptr */
#ifdef ERROR_SEARCH_NOT_FOUND
#undef ERROR_SEARCH_NOT_FOUND
#endif
#define ERROR_SEARCH_NOT_FOUND ((int)-3)

/* Standard array size for manual dimension declaration */
#ifdef BUFF_SIZE
#undef BUFF_SIZE
#endif
#define BUFF_SIZE 1024

char * find_the_word(char * sentence_ptr, char * searchWord, int * errorCode_ptr);

struct Surfin_Bird_Test_Struct
{
    char *inputString;
    char *searchWord;
    char *returnValue;
    int errorCode;
};

int main(void)
{
	int i = 0; 
	int numTestsRun = 0;
	int numTestsPassed = 0;
	int putErrorCodeHere = DEFAULT_ERROR_CODE;
	char * returnValue = NULL;
	char testChar1 = 0; // DEBUGGING
	char testChar2 = 0; // DEBUGGING

    struct Surfin_Bird_Test_Struct testerino[6];

	/* TEST INPUT */
	char testInput0[] = { "Good luck to you on this lab.\nI hope you do well." }; // Key: \n
	char testInput1[] = { "Normal test input.  'The' is the search key." }; // Key: The
	char testInput2[] = { "This is also normal input.  The 'bird' is the word." }; // Key: bird
	char testInput3[] = { "This string is an example of a string that has two occurrences of the word 'is'." }; // Key: is
	char testInput4[] = { "The word 'the' is very common in the English language." }; // Key: the
	char testInput5[] = { "Many English words are 'loan words', which is defined as 'a word that has been adopted from one language into another'." }; // Key: word

	// assigning values to struct inputString
	testerino[0].inputString = testInput0;
	testerino[1].inputString = testInput1;
	testerino[2].inputString = testInput2;
	testerino[3].inputString = testInput3;
	testerino[4].inputString = testInput4;
	testerino[5].inputString = testInput5;

	/* TEST SEARCH KEYS */
	char testKey0[] = {10,0};
	char testKey1[] = { "The" };
	char testKey2[] = { "bird" };
	char testKey3[] = { "is" };
	char testKey4[] = { "the" };
	char testKey5[] = { "word" };

	/* TEST RETURN VALUES */
	testerino[0].returnValue = NULL;
	testerino[1].returnValue = NULL;
	testerino[2].returnValue = NULL;
	testerino[3].returnValue = NULL;
	testerino[4].returnValue = NULL;
	testerino[5].returnValue = NULL;

	/* TEST ERROR CODES */
	testerino[0].errorCode = ERROR_CODE_SUCCESS;
	testerino[1].errorCode = ERROR_SEARCH_NOT_FOUND;
	testerino[2].errorCode = ERROR_NULL_SENTENCE_POINTER;
	testerino[3].errorCode = ERROR_NULL_SEARCH_POINTER;
	testerino[4].errorCode = DEFAULT_ERROR_CODE;
	testerino[5].errorCode = ERROR_SEARCH_NOT_FOUND;

	/* CALCULATE THE NUMBER OF TESTS */
	int numTotalTests = sizeof(testerino) / sizeof(testerino[0]);

	/* EXECUTE THE TESTS */
	for (i = 0; i < numTotalTests; i++)
	{
		/* 0. TEST HEADER */
		printf("\n");
		printf("************\n");
		printf("* TEST #%02d *\n", i);
		printf("************\n");
        if(i != 4)
        {
            returnValue = find_the_word(testerino[i].inputString, testerino[i].searchWord, &putErrorCodeHere);
        }
        else
        {
            returnValue = find_the_word(testerino[i].inputString, testerino[i].searchWord, NULL);
        }
        


		/* 1. TEST RETURN VALUE */
		numTestsRun++;
		printf("\tReturn Value Test:\t");
		if (returnValue == testerino[i].returnValue)
		{
			puts("Pass");
			numTestsPassed++;
		}
		else
		{
			puts("FAIL!");
			printf("\t\tExpected pointer:\t%p\n", testerino[i].returnValue);
			printf("\t\tReceived pointer:\t%d\n", returnValue);
		}

		/* 2. TEST ERROR CODE */
		numTestsRun++;
		printf("\tError Code Test:\t");
		if (putErrorCodeHere == testerino[i].errorCode)
		{
			puts("Pass");
			numTestsPassed++;
		}
		else
		{
			puts("FAIL!");
			printf("\t\tExpected error code:\t%d\n", testerino[i].errorCode);
			printf("\t\tReceived error code:\t%d\n", putErrorCodeHere);
			if (putErrorCodeHere == DEFAULT_ERROR_CODE)
			{
				puts("\t\tError code not even updated!");
			}
		}

		putErrorCodeHere = DEFAULT_ERROR_CODE; // Reset error code
	}

	if (numTestsRun)
	{
		printf("\n\n\n*******************************\n");
		printf("Out of the %d tests that ran...\n", numTestsRun);
		printf("%d tests passed.\n", numTestsPassed);
		printf("*******************************\n"); 
	}
	
	return 0;
}

char * find_the_word(char * sentence_ptr, char * searchWord, int * errorCode_ptr)
{
    char *returnValue = NULL;
    if(sentence_ptr == NULL)                                //If null string is passed ERROR and return NULL
    {
        *errorCode_ptr = ERROR_NULL_SENTENCE_POINTER;
        return returnValue;
    }
    else if(searchWord == NULL)                         //If null string is passed,ERROR and return NULL 
    {
        *errorCode_ptr = ERROR_NULL_SEARCH_POINTER;
        return returnValue;
    }
    else if(errorCode_ptr == NULL)                          //If null errorCode is passed,ERROR and return NULL
    {
        return returnValue;
    }
	for(int i = 0; i < strlen(sentence_ptr); i++)           //For every letter in the sentence
    {
        if((strlen((sentence_ptr + i)) - strlen(searchWord)) >= 0)    //If our search word fits then search for it
        {
            for(int j = 0; j < strlen(searchWord); j++)         //For every letter in search word
            {
                if(*(sentence_ptr + i + j) != *(searchWord + j))        //If the letters aren't the same then break
                {
                    break;
                }
                else if((j == strlen(searchWord) - 1) && *errorCode_ptr == ERROR_CODE_SUCCESS)
                {
                    returnValue = NULL;
                }
                else if((j == strlen(searchWord) - 1) && *errorCode_ptr == DEFAULT_ERROR_CODE)    //if the value is equal to the last value then exit
                {
                    *errorCode_ptr = ERROR_CODE_SUCCESS;
                    returnValue = (sentence_ptr + i);
                }
            }
        }
    }
    if(returnValue == NULL)
    {
        *errorCode_ptr = ERROR_SEARCH_NOT_FOUND; //if not found then return it
    }

    return returnValue;  
}