#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix
 * @s: segment to check
 * @accept: the bytes to include
 *
 * Return: The numbers of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, a;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (a = 0; accept[a] != '\0'; a++)
			{
				if (s[i] == accept[a])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
