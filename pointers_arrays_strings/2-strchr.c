#include "main.h"
#include <stddef.h>

/**
* _strchr - check the line for characters
* @s: the line to check
* @c: the character to check
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
