#include "main.h"
#include <stdlib.h>

/**
 * _strstr - A function that locates a substring
 * @haystack: The big string to search
 * @needle: the substring to seach
 *
 * Return: a pointer to the beginning
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int a = 0;

	while (needle[a] != '\0')
		a++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != a)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
