#include <stdio.h>

/**
 * _isupper - Checks is a letter is uppercase
 * @c = the character to be checked
 * Return: 1 for uppercase letter, 0 for anything else
 */

int _isupper(int c)
{
	if ('A' <= c <= 'Z')
		return (1);
	else
		return (0);
}
