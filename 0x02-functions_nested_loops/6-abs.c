#include "main.h"

/**
 * _abs - entry point
 * Description: prints absolute value of an integer
 * @n: character to test
 * Return: integer
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
