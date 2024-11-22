#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - prints name in uppercase or as is
* @name: the function
* @f: the function
*
* Return: VOID
*/

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
