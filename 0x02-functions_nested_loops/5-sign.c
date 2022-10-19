#include "main.h"

/**
 * print_sign - entry point
 *
 * Description: prints the sign of a number
 * Return: 1 char > 0, 0 if char = 0, -1 if char < 0
 * @n: character to test
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(' ');
		return ('/');
	}
}
