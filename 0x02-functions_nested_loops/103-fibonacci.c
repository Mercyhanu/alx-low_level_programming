#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long c, i, j, k, s;

	i = 0;
	s = 0;
	j = 1;
	for (c = 0; c < 50; c++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			s = s + k;
		}
	}
	printf("%lu\n", s);
	return (0);
}
