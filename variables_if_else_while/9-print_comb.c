#include <stdio.h>

/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '8'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}

	putchar('9');

	putchar('$');

	putchar('\n');

	return (0);
}
