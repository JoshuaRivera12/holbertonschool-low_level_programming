#include "main.h"

/**
* _isupper - checks for uppercase letters
* @c: the characters to check
*
* Return: 1 if c is uppercased, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
