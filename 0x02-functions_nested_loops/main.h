#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - Prints lowercase alphabet
 * Return: 0
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - Prints lowercase alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void);

/**
 * _islower - Checks if character is lowercase
 * @c: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c);

/**
 * _isalpha - Checks if character is alphabetical
 * @c: character to check
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c);

/**
 * print_sign - Prints the sign of a number
 * @n: Number to check
 * Return: 1 if positive, 0 if 0, -1 if negative
 */

int print_sign(int n);

#endif
