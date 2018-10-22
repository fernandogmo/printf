#include <stdlib.h> /* NULL macro */
#include <stdio.h>
#include <stdarg.h> /* for variadic */
#include "holberton.h" /* _putchar */

/**
 * _printf - prints to stdout according to a format string
 * @format: constant string containing zero or more directives
 * Return: int number of characters printed (excluding terminating null-byte)
 */

int print_char(va_list valist)
{
	return _putchar(va_arg(valist, int));
}

int print_string(va_list valist)
{
	char *str = va_arg(valist, char *);
	int count = 0;

	while (str[count] != '\0')
		count += _putchar(str[count]);

	return (count);
}

int _printf(const char *format, ...)
{
	int count = 0;
	int index_1;
	int index_2 = 0;
	va_list valist;

	printf ops[] = {
		{"c", print_char},
		{NULL, NULL}
	};

	va_start(valist, format);

	for (index_1 = 0; format[index_1] != '\0'; index_1++)
	{
		index_2 = 0;

		while (ops[index_2].spec != NULL) /* move through array */
		{
			if (format[index_1] == '%')
			{
				if (format[++index_1] == '%')
				{
					count += _putchar('%');
					break;
				}
			}

			else if (format[index_1] == ops[index_2].spec[0])
			{
				count += ops[index_2].fn(valist);
				break;
			}

			else
				exit (-1);

			count += _putchar(format[index_1]);
			index_2++;
		}
	}
	va_end(valist);
	return (count);
}

int main()
{
	_printf("a\n");
	return (0);
}
