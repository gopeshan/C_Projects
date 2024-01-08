#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 3
#define MAX_MOVES (BOARD_SIZE * BOARD_SIZE)

void print_board(char board[BOARD_SIZE][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j != BOARD_SIZE - 1)
                printf("|");
        }
        printf("\n");
        if (i != BOARD_SIZE - 1)
            printf("---+---+---\n");
    }
}

int check_win(char board[BOARD_SIZE][BOARD_SIZE], char symbol)
{
    // Check rows, columns, and diagonals
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol)
            return 1; // Check rows

        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol)
            return 1; // Check columns
    }

    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
        return 1; // Check main diagonal

    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
        return 1; // Check anti-diagonal

    return 0; // No win
}

int main()
{
    char board[BOARD_SIZE][BOARD_SIZE];
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }

    printf("Welcome to Tic-Tac-Toe!\n");
    printf("Player 1 uses 'X' and Player 2 uses 'O'.\n");
    printf("The board is numbered like this:\n");
    printf(" 1 | 2 | 3 \n");
    printf("---+---+---\n");
    printf(" 4 | 5 | 6 \n");
    printf("---+---+---\n");
    printf(" 7 | 8 | 9 \n");

    int player = 1;
    int moves;
    for (moves = 0; moves < MAX_MOVES; moves++)
    {
        printf("Player %d's turn:\n", player);

        int row, col, pos;
        do
        {
            printf("Enter a position (1-9): ");
            scanf("%d", &pos);
            row = (pos - 1) / BOARD_SIZE;
            col = (pos - 1) % BOARD_SIZE;
        } while (pos < 1 || pos > MAX_MOVES || board[row][col] != ' ');

        board[row][col] = (player == 1) ? 'X' : 'O';
        print_board(board);

        if (check_win(board, (player == 1) ? 'X' : 'O'))
        {
            printf("Player %d wins!\n", player);
            break;
        }

        player = 3 - player; // Switch players (1 -> 2, 2 -> 1)
    }

    if (moves == MAX_MOVES)
    {
        printf("Tie game!\n");
    }

    return 0;
}
