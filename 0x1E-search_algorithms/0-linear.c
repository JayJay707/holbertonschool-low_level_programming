#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * with the linear search algorithm
 * @array: a pointer to the 1st element of the array
 * @size: the size of the array
 * @value: the value to search for
 * Return: the 1st index where the value is found or -1 if fail
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
