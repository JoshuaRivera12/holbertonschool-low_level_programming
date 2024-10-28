#include "main.h"

/**
* print_line - A function that prints a line in the terminal.
* @n: the letter that prints lines.
*
* Return: Always 0.
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
