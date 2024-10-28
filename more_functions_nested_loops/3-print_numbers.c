#include "main.h"

/**
* print_numbers - Writes a function that prints numbers
*
* Return: Will always be 0
*/

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
