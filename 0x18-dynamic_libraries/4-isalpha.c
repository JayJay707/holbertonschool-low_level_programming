#include "main.h"

/**
 * _isalpha - Checks if character is alphabetical
 * @c: character to check
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}