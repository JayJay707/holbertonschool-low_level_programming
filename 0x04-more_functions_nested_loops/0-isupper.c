#include "main.h"

/**
 * _isupper - Checks for uppercase char
 * @c = char to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if ('A' <= c <= 'Z')
		return (1);
	else
		return (0);
}
