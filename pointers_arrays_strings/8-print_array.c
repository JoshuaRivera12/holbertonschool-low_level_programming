#include "main.h"
#include <stdio.h>

/**
* print_array - prints the numbers of elements of an array of integers
* @a: the numbers that are being printed in an array of int
* @n: the numbers that are being printed in an arry of int
*
* Return: Void
*/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b < n - 1)
			printf("%d, ", a[b]);
		else
			printf("%d", a[b]);
	}
	printf("\n");
}
