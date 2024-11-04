#include "main.h"

/**
* _memcpy - Copies memory area
* @dest: Destination buffer
* @src: Source buffer
* @n: Number of bytes to copy
*
* Return: Pointer to the destination buffer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
