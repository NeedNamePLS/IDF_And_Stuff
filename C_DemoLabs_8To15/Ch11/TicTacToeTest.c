/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// PERFORMANCE LAB (I.5.A) 6 /////////////////////////////////////////////
////////////////////////////////////////////// MULTI-DIMENSIONAL ARRAYS /////////////////////////////////////////////
//////////////////////////////////////////////////// "Tic Tac Toe" //////////////////////////////////////////////////
////////////////////////////////////////////////////// Stub Code ////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Replicate a tic tac toe grid using a two-dimensional char array of global scope (for ease of use)
// Define the following prototype functions in main(void) according to their specifications:
//     int printTheGrid(void);
//     int any_plays_left(void);
//     char did_someone_win(void);
//     int what_is_your_play(char currentPlayer, int gridLocation);
// Loop through those functions, in the order listed above and below, taking input until:
//     Someone wins *or*
//     There are no more selections (stalemate)
// Check for bad input (e.g., Selection 99) and reported errors (e.g., what_is_your_play() should return -1 on
//     an invalid selection)
// Direct reference to array elements (e.g., myArray[0][1]) is authorized.  In other words, pointer arithmetic
//     is not mandatory.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int clear_Input(); // Resets input cache to prevent any errors when inputing choices
int print_the_grid(void);

/*
 * FUNCTION:   int any_plays_left(void)
 *
 * ARGUMENTS:  NONE
 *
 * RETURNS:	   On success, the number of available choices
 *             On failure, 0
 *
 * NOTES:      This function should count and return the number of remaining 'moves' from the 2D array
 */
int any_plays_left(void);

/*
 * FUNCTION:   char did_someone_win(void)
 *
 * ARGUMENTS:  NONE
 *
 * RETURNS:	   On success, the character of the winner (should be either 'X' or 'O') or 0 for "no winner"
 *             On failure, 0
 *
 * NOTES:      There are 8 possible win conditions:
 *                 Top row, middle row, bottom row
 *                 Left column, middle column, right column
 *                 Backslash, "Frontslash" (TM pending)
 */
char did_someone_win(void);

/*
 * FUNCTION:   int what_is_your_play(char currentPlayer, int gridLocation)
 *
 * ARGUMENTS:  char currentPlayer should either be 'X' or 'O' to represent the char to store
 *             int gridLocation should indicate the position on the grid to place "currentPlayer" as
 *                 defined by whomever defined print_the_grid().
 *
 * RETURNS:	   On a successful choice, 1
 *             If the user chooses a location that has already been taken, 0
 *             On failure, -1
 *
 * NOTES:      Verify that gridLocation has not already been chosed before accepting the play
 *             If the play is valid, record the selection within the 2D tic tac toe array
 */
int what_is_your_play(char currentPlayer, int gridLocation);

/* TIC TAC TOE char array */
char ticTacToeGrid[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int playerInput = 0;
//int playsRemaining = 0;

int main(void)
{
	/* PRINT THE LEGEND AND CURRENT STATUS OF THE GAME */
	print_the_grid();

	/* DETERMINE IF THERE ARE NO MORE MOVES LEFT */
	any_plays_left();

	/* DID SOMEONE WIN?  INFORM THE PLAYERS AND END THE GAME */
	did_someone_win();

	/* OTHERWISE, ALLOW THE NEXT PLAYER TO MAKE A MOVE */
	what_is_your_play('U', 0);

	// NOTE:  Don't forget error checking and input validation along the way.

	return 0;
}

/*
 * FUNCTION:   int printTheGrid(void)
 *
 * ARGUMENTS:  NONE
 *
 * RETURNS:	   On success, 1
 *             On failure, 0
 *
 * NOTES:      This function should first print out a tic tac toe legend:
 *              1 | 2 | 3
 *             -----------
 *              4 | 5 | 6
 *             -----------
 *              7 | 8 | 9
 *
 *             Then, this function should print out the current state of the 2D char array in a similar format:
 *                |   | X
 *             -----------
 *              X | O |
 *             -----------
 *                |   |
 */
int print_the_grid(void)
{

	printf("[Input Grid]\n");
	printf(" 1 | 2 | 3 \n-----------\n 4 | 5 | 6 \n-----------\n 7 | 8 | 9 \n\n");
	printf("[Current Game]\n");
	printf(" %c | %c | %c \n-----------\n", ticTacToeGrid[0][0], ticTacToeGrid[1][0], ticTacToeGrid[2][0]);
	printf(" %c | %c | %c \n-----------\n", ticTacToeGrid[0][1], ticTacToeGrid[1][1], ticTacToeGrid[2][1]);
	printf(" %c | %c | %c \n\n", ticTacToeGrid[0][2], ticTacToeGrid[1][2], ticTacToeGrid[2][2]);

	
}

/*
 * FUNCTION:   int any_plays_left(void)
 *
 * ARGUMENTS:  NONE
 *
 * RETURNS:	   On success, the number of available choices
 *             On failure, 0
 *
 * NOTES:      This function should count and return the number of remaining 'moves' from the 2D array
 */
int any_plays_left(void)
{
	int playCounter = 0;

	for (int i = 0; i < 3; i++)
	{
		if (ticTacToeGrid[i][0] == ' ')
		{playCounter++;}
	}
	for (int i = 0; i < 3; i++)
	{
		if (ticTacToeGrid[i][1] == ' ')
		{playCounter++;}
	}
	for (int i = 0; i < 3; i++)
	{
		if (ticTacToeGrid[i][2] == ' ')
		{playCounter++;}
	}
	printf("There are %d plays remaining.\n", playCounter);

	return playCounter;
}

/*
 * FUNCTION:   char did_someone_win(void)
 *
 * ARGUMENTS:  NONE
 *
 * RETURNS:	   On success, the character of the winner (should be either 'X' or 'O') or 0 for "no winner"
 *             On failure, 0
 *
 * NOTES:      There are 8 possible win conditions:
 *                 Top row, middle row, bottom row
 *                 Left column, middle column, right column
 *                 Backslash, "Frontslash" (TM pending)
 */
char did_someone_win(void)
{
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// X Victory Condition
	// 
    
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//return
}

/*
 * FUNCTION:   int what_is_your_play(char currentPlayer, int gridLocation)
 *
 * ARGUMENTS:  char currentPlayer should either be 'X' or 'O' to represent the char to store
 *             int gridLocation should indicate the position on the grid to place "currentPlayer" as
 *                 defined by whomever defined print_the_grid().
 *
 * RETURNS:	   On a successful choice, 1
 *             If the user chooses a location that has already been taken, 0
 *             On failure, -1
 *
 * NOTES:      Verify that gridLocation has not already been chosed before accepting the play
 *             If the play is valid, record the selection within the 2D tic tac toe array
 */
int what_is_your_play(char currentPlayer, int gridLocation)
{
	printf("What is your next play: ");
	scanf("%d", &gridLocation);

	switch (gridLocation)
	{
		case 1:
			if (ticTacToeGrid[0][0] == ' ')
			{
				ticTacToeGrid[0][0] = 'X';
				main();
			}
			break;
		default:
			
			break;
	}

}

// Resets input cache
int clear_Input()
{
    while (getchar() != '\n');
}