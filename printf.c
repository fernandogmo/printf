#include <stdarg.h> /* va_list, va_start, va_arg, va_end macros */
#include <stdlib.h> /* NULL macro */
#include "holberton.h" /* _putchar */

/**
 * _printf - prints to stdout according to a format string
 * @format: constant string containing zero or more directives
 * Return: int number of characters printed (excluding terminating null-byte)
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list ap;
	print_t funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		switch (format[++i])
		{
		case '%':
			count += _putchar('%');
			break;
		case 'c':
		case 's':
			count += call_print_fn(format[i], funcs, ap);
			break;
		default:
			if (format[i] >= 7 && format[i] <= 13)
			{
				count += _putchar('%');
				count += _putchar(format[i]);
				break;
			}
			return (-1);
		}
	}
	va_end(ap);
	return (count);
}
