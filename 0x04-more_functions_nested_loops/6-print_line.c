#include "main.h"

/**
 * print_line - Prints _ n times to draw a line
 * @n: Length of line
 */

void print_line(int n)
{
	int length = n;

	for (length = n; length > 0; length--)
		_putchar('_');

	_putchar('\n');
}
