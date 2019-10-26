#include "holberton.h"

/*void op_mod(va_list a)
{
	_putchar(va_arg(a, int));
}*/
void op_char(va_list a)
{
	_putchar(va_arg(a, int));
}
void op_string(va_list a)
{
	char *pl;
	int i;
	pl = va_arg(a, char *);
	for (i = 0; *pl; i++)
	{
		_putchar(pl[i]);
	}
}
void op_int_b10(va_list a)
{
	_putchar(va_arg(a, int));
}
void op_integer(va_list a)
{
	_putchar(va_arg(a, int));
}
