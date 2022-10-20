#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints natural numbers less than 1024
 * Return: Always 0
 */
int main(void)
{
	int n, result;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			result = result + n;
	}
	printf("%d\n", result);
	return (0);
}
