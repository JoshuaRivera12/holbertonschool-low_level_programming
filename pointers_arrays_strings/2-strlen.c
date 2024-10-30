#include "main.h"

/**
* _strlen - The function that prints the lenght of a string
* @s: the legnth of a string
*
* Return: Always 0
*/

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
