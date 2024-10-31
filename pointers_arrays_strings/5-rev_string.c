#include "main.h"

/**
* rev_string - prints the text upside down and up
* @s: the text that will be printed upside down and up
*
* Return: Void
*/

void rev_string(char *s)
{
	int a = 0, b = 0;
	char c, d;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (b = 0; b < a; b++)
	{
		c = s[b];
		d = s[a];
		s[b] = d;
		s[a] = c;
		a--;
	}
}
