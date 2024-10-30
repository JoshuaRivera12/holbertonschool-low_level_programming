#include "main.h"

/**
* print_rev - print he function in reverse
* @s: the function that will be printed in reverse
*
* Return: Void
*/

void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	for (b -= 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
