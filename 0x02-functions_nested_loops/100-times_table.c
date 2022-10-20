#include "main.h"

/**
 * print_times_table - prints the times table for n
 * Return: void
 * @s: character to test
 */
void print_times_table(int s)
{
	int i, j, result;

	if (!(s > 15 || s < 0))
	{
		for (i = 0; i <= s; i++)
		{
			for (j = 0; j <= s; j++)
			{
				result = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (result < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((result % 10) + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100 && j != 0)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
