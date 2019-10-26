#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

typedef struct data
{
	char *formato;
	int (*f)(int n, ...);
} formaton ;
int _putchar(char c);
int _printf(const char *format, ...);
#endif