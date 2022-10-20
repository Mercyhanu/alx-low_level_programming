#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main entry
 *
 * Description: print natural numberrs
 * Return: void
 * @i: number to start counting from
 */
void print_to_98(int i)
{
	if (i < 98)
	{
		for (i = i; i < 98; i++)
			printf("%d, ", i);
		printf("%d\n", 98);
	}
	else
	{
		for (i = i; i > 98; i--)
			printf("%d, ", i);
		printf("%d\n", 98);
	}
}
