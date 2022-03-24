#include "main.h"

/**
 * clear_bit - set value to 0 with given index
 * @n:pointer to unsigned int
 * @index: unsigned int index
 * Return: 1 if success -1 in case of error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	x <<= index;
	*n &= ~x;
	return (1);
}
