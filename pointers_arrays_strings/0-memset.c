#include "main.h"
#include <stdio.h>

/**
* _memset - Function that fills the first part of bites
* @s: A value
* @b: A value
* @n: A value
*
* Return: Always 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
