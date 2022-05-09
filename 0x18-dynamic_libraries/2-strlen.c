#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 * Return: Length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
