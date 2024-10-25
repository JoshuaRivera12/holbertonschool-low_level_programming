#include "main.h"

/**
* print_last_digit - Print the last value of the number
* @n: value of int
*
* Return: 0
*/

int print_last_digit(int n)

{
	int m = n % 10;

	if (m < 0)
	m *= -1;
	_putchar(m + '0');
	return (m);
}
