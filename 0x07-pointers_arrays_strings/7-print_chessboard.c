#include "main.h"

/**
<<<<<<< HEAD
 * print_chessboard - prints the chessboard.
 * @a: the board
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
=======
  * print_chessboard - Print the chessboard
  * @a: array of pieces
  *
  * Return: Nothing.
  */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		_putchar('\n');
	}
}
