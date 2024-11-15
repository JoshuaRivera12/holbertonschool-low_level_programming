#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory
* @b: the number to memory
*
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
