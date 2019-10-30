#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

typedef struct data
{
	char c;
	int (*fun)(va_list list);
}data;


int _putchar(char c);
int _printf(const char *format, ...);
int help(const char *format, va_list list);
int op_char(va_list a);
int op_string(va_list a);

#endif