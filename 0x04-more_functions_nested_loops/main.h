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

/**
 * print_line - Prints _ n times to draw a line
 * @n: Length of line
 */

void print_line(int n);

/**
 * print_diagonal - Prints a diagonal line with \
 * @n: Length of the line
 */

void print_diagonal(int n);

/**
 * print_square - Prints a square of #
 * @size: Size of the square
 */

void print_square(int size);

/**
 * print_triangle - print traingle of #
 * @size: size of triangle to draw
 */

void print_triangle(int size);

/**
 * print_number - Prints an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n);

#endif /* MAIN_H */
