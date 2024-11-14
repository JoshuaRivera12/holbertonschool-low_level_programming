#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - potinter to a new space in memory
* @str: the string to copy
*
* Return: NULL
*/

char *_strdup(char *str)
{
	int l;
	char *mail, *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	l = strlen(str);
	mail = malloc(sizeof(char) * l + 1);

	if (mail == NULL)
	{
		return (NULL);
	}
	copy = mail;

	while (*str)
	{
		*copy = *str;
		copy++;
		str++;
	}
	*copy = '\0';
	return (mail);
}
