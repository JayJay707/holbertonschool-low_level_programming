#include main.h

/**
 * more_numbers - Prints  numbers 0-14 ten times
 */

void more_numbers(void)
{
	char i;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
	}
}
