#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @i: character to test
 *
 * Return: 1
 */
int print_last_digit(int i)
{
	int a;
	int b;

	a = i % 10;
	if (a < 0)
		a = -a;
	b = '0' + a;
	_putchar(b);
	return (a);
}
