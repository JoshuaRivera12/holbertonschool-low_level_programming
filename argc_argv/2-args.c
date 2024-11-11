#include <stdio.h>

/**
* main - the starting point of the code
* @argc: size of argv
* @argv: the program being contaned
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}
