#include "main.h"

/**
 * print_diagonal - Prints a diagonal line with \
 * @n: Length of the line
 */

void print_diagonal(int n)
{
	int length = n;

	for (length = n; length > 0; length--)
		_putchar('\\');

	_putchar('\n');
}
