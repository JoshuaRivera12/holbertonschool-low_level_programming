#include "main.h"

/**
 * times_table - Prints a multiplication table.
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int num, div, result;

	for (num = 0; num < 10; num++)
	{
		for (div = 0; div < 10; div++)
		{
			result = num * div;
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (div != 0)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			if (div != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
