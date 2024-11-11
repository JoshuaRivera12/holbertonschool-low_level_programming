#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - The starting point of the code
* @argc: size of argv
* @argv: the program being contaned
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("ERROR\n");
	return (1);
}
