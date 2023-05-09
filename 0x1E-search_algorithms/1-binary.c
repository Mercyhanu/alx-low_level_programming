#include "search_algos.h"

/**
 * binary_search - search a value in an array using binary search
 * @size: the size of the array
 * @array: the array to be searched
 * @value: the value to be searched
 * Return: returns the index of the value
 */


int binary_search(int *array, size_t size, int value)
{
	size_t l, m, r;


	if (size <= 0)
		return (-1);

	l = 0;
	r = size - 1;


	while (l <= r)
	{

		size_t l_copy = l;
		size_t r_copy = r;


		printf("Searching in array: ");
		while (l_copy <= r_copy)
		{
			if (l_copy != r_copy)
				printf("%d, ", array[l_copy]);
			else
				printf("%d\n", array[l_copy]);

			l_copy++;
		}

		m = (l + r) / 2;
		if (array[m] == value)
			return (m);

		else if (array[m] > value)
			r = m - 1;

		else
			l = m + 1;
	}

	return (-1);
}
