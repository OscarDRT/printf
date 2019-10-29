#include "holberton.h"

/**
void op_mod(va_list a)
{
	_putchar(va_arg(a, int));
}
*/
int op_char(va_list a)
{
	_putchar(va_arg(a, int));
	return (1);
}

int op_string(va_list a)
{
	char *pl;
	int i;
	pl = va_arg(a, char *);
	for (i = 0; *pl; i++)
	{
		_putchar(pl[i]);
	}
	return (i);
}
/**
void op_int_b10(va_list a)
{
	_putchar(va_arg(a, int));
}
void op_integer(va_list a)
{
	_putchar(va_arg(a, int));
}
*/
