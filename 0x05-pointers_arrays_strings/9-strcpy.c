#include "main.h"

/**
 * char *_strcpy - Copies the string pointed to by src to dest
 * @dest: Destination
 * @src: Source
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
