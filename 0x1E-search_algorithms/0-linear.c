#include "search_algos.h"
/**
 * linear_search - search a value in an array
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: returns the index of the value
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;


	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
