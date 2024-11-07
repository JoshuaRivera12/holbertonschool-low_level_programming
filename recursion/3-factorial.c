#include "main.h"

/**
 * factorial - return the number given
 * @n: the number
 *
 * Return: NULL
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
