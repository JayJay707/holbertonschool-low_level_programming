#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _isupper - Checks for uppercase char
 * @c = char to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c);

/**
 * _isdigit - Checks for a digit (0-9)
 * @c: Char to be checked
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c);

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: Product of a and b
 */

int mul(int a, int b);

/**
 * print_numbers - Prints numbers 0-9
 */

void print_numbers(void);

/**
 * print_most_numbers - Prints 0-9, except 2 & 4
 */

void print_most_numbers(void);

/**
 * more_numbers - Prints  numbers 0-14 ten times
 */

void more_numbers(void);

#endif /* MAIN_H */
