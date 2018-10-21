#include <stdlib.h> /* NULL macro */
#include "holberton.h" /* _putchar */

/**
 * _printf - prints to stdout according to a format string
 * @format: constant string containing zero or more directives
 * Return: int number of characters printed (excluding terminating null-byte)
 */
int _printf(const char *format, ...)
{
	int count = 0;

	/* begin filler code */
	if (format != NULL)
	{
		_putchar(*format);
		count++;
	}
	/* end filler code */

	return (count);
}
