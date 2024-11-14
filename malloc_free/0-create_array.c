#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of char
* @size: The size of an array
* @c: The character being stored
*
* Return: NULL
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *Mail;

	if (size == 0)
	{
		return (NULL);
	}
	Mail = malloc(sizeof(char) * size);

	if (Mail == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		Mail[i] = c;
	}
	return (Mail);
}
