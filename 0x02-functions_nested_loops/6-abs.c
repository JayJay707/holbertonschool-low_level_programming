#include "main.h"

/**
 * _abs - Returns absolute value of an integer
 * @n: Integer argument
 * Return: Absolute value
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
