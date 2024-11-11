#include <stdio.h>

/**
* main - the starting point of the code
* @argc: size of argc
* @argv: the program being contaned
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
