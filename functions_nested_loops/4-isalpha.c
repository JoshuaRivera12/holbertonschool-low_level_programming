#include "main.h"

/**
 * _isalpha- checks for lowercase character
 * @c: the character to check
 *
 * Return: 1 if C is uppercaes otherwize 0
 */

int _isalpha(int c)
{
	if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}

