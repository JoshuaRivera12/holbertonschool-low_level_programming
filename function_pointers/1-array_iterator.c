#include "function_pointers.h"

/**
* array_iterator - a function that prints a name
* @array: the array of the function
* @size: the size of the function
* @action: the ponter to use
*
* Return: VOID
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
