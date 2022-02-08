#include <stdio.h>

/**
 * main - Prints sum of even Fibonacci numbers up to 4M
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned int a, b, c, d, s;

	a = 1;
	b = 2;
	c = 3;
	s = 2;
	for (d = 2; d <= 32; d++)
	{
		if (c % 2 == 0)
			s = s + c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%u\n", s);
	return (0);
}
