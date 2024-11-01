#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
* puts2 - writes a function that prints every other character
* @str: the character thats being printed out
*
* Return: Void
*/

void puts2(char *str)
{
	int z;

	for (z = 0; z < _strlen(str); z++)
	{
		if ((z % 2) == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
