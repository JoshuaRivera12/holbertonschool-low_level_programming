#include "main.h"
/**
* _put - prints the value of a string
* @str: is the value that is being printed
*
* Return: Void
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
