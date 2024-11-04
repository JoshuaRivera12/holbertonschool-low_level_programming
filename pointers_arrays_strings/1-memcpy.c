#include "main.h"

/**
* _memcpy - copys the code and paste it
* @dest: the place the code is going to
* @src: the code of the text
* @n: N/A
*
* return: always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for(; i < n; i++)
	{
		dest[i] = *src + i;
	}
	return (dest);
}
