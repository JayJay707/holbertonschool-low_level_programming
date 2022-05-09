#include "main.h"

/**
 * _isdigit - Checks for a digit (0-9)
 * @c: Char to be checked
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
