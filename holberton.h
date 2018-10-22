#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__

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


int _putchar(char c);

#endif
