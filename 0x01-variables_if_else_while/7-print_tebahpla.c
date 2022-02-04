#include <stdio.h>

/**
 *main - Prints alphabet in reverse
 *Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}
