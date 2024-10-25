#include "main.h"

/**
 * int _abs(int);  prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero,
 *         -1 if n is less than zero
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
	
}

