#include <stdio.h>

/**
 *main - Prints alphabet (lower + upper case)
 *Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}

	putchar('\n');

	return (0);
}
