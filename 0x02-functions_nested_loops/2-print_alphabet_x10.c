#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints alphabets
 */
void print_alphabet_x10(void)
{
	char i;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
