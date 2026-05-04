#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array of characters (chessboard)
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;
	const int ROW = 8;
	const int COLUMN = 8;

	for (i = 0; i < COLUMN; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
