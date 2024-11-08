#include "main.h"

/**
* _pow_recursion - the function that will raise the power of x to the power y
* @x: the value that will be raised to y
* @y: the valuse x will be raised to
*
* Return: 0
*/

int _pow_recursion(int x, int y)
{
	int s = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(s, y - 1));
}
