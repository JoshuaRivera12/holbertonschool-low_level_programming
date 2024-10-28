#include "main.h"

/**
* print_diagonal - prints the text diagonaly.
* @n: the text that will cause the text box to move diagonaly.
*
* Return: Always 0.
*/

void print_diagonal(int n)
{
	int m, v;

		if (n <= 0)
			_putchar('\n');
	for (m = 0; m < n; m++)
	{
		for (v = 0; v < m; v++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
