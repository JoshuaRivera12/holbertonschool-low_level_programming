#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: the rows of the chessboard
 *
 * Return: Void
 */

void print_chessboard(char (*a)[8])
{
	int i, z;

	for (i = 0; i < 8; i++)
	{
		for (z = 0; z < 8; z++)
		{
			if (z == 7)
			{
				_putchar(a[i][z]);
				_putchar('\n');
			}
			else
				_putchar(a[i][z]);
		}
	}
}
