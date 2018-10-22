#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__

int _putchar(char c);

typedef struct func
{
	char *spec;
	int (*fn)(va_list);
} printf;

#endif
