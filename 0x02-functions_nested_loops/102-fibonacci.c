#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long c, i, j, s;

	i = 0;
	j = 1;
	for (c = 0; c < 50; c++)
	{
		s = i + j;
		i = j;
		j = s;
		printf("%lu", s);
		if (c == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
