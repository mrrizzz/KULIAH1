#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 9
#define COLS 9

void print_board(int board[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int board[ROWS][COLS] = {0};
    srand(time(NULL));

    // Generate random numbers for the board
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            board[i][j] = rand() % 9 + 1;
        }
    }

    print_board(board);

    return 0;
}
