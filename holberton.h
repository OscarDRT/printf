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
void op_char(va_list a);
void op_string(va_list a);
void op_int_b10(va_list a);
void op_integer(va_list a);
void op_mod(va_list a);
#endif