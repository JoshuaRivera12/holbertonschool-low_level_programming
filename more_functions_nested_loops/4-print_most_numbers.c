#include "main.h"
/**
* print_most_numbers - writes a function that prints most numbers
*
* Return: Always 0
*/

void print_most_numbers(void)
{
	char n[] = "1356789";
	int i = 0;

		while (n[i] != '\0')
		{
			_putchar(n[i]);
			i++;
		}
	_putchar('\n');
}
