#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index at which the value is foundor -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + right / 2;
		printf("Searching in array: ");

		for (i = left; i < right; i++)
		{
			printf("%i", array[i]);
		}

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
