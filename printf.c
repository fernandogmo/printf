#include <stdarg.h> /* va_list, va_start, va_arg, va_end macros */
#include <stdlib.h> /* NULL macro */
#include "holberton.h" /* _putchar */



/**
 * struct printer - format printer struct
 * @spec: the format specifier
 * @fn: the function that handles spec
 */
typedef struct printer
{
	char *spec;
	void (*fn) (va_list);
} print_t;



/**
 * print_char - prints a char parameter from a va_list
 * @ap: va_list from calling function
 */
void print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
}



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
