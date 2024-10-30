#include "main.h"

/**
* swap_int - swaps a with b
* @a: the value of a
* @b: the value of b
*
* Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

		*a = *b;
		*b = tmp;
}
