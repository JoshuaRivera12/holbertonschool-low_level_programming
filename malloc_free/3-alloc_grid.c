#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - create a sD array
* @width: the width
* @height: the height
*
* Return: 2D array or NULL
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **mail;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	mail = malloc(sizeof(int *) * height);
	if (mail == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mail[i] = malloc(sizeof(int) * width);
		if (mail[i] == NULL)
		{
			while (i >= 0)
			{
				free(mail[i]);
				i--;
			}
			free(mail);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mail[i][j] = 0;
		}
	}
	return (mail);
}
