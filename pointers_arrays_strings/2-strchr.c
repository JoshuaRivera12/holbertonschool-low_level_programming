#include "main.h"
#include <stddef.h>

/**
* _strchr - check the string line for characters
* @s: the line to check
* @c: the character to check
*
* Return: Always NULL
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ((c == '\0') ? s : NULL);
}
