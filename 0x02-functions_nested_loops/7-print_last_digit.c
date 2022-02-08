#include "main.h"

/**
 * print_last_digit - Prints last digit of integer
 * @n: Integer argument
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int l

	l = n % 10;

	if (l < 0)
		l = -l;

	_putchar('0' + l);

	return (l);
}
