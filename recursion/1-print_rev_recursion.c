#include "main.h"

/**
 * _print_rev_recursion - the string
 * @s: the string rev
 *
 * Return: NULL
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

