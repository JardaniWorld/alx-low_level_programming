#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
char board[8][8] = {
{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
};
print_chessboard(board);
return (0);
}
