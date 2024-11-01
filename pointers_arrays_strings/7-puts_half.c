#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
* puts_half - Prints half of the function
* @str: the function that is being printed in half
*
* Return: Void
*/

void puts_half(char *str)
{
	int len = _strlen(str);
	int start;
	int i;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len / 2) + 1;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
