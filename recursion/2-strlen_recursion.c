#include "main.h"

/**
 * _strlen_recursion - the code that counts letters and spaces
 * @s: the code that is being counted
 *
 * Return: NULL
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return(1 + _strlen_recursion(s + 1));
	}
}
