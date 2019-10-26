#include "holberton.h"


int _printf(const char *format, ...)
{
	formaton ops[] = {
	{'%', op_mod},
	{"c", op_char},
	{"s", op_string},
	{"d", op_int_b10},
	{"i", op_integer},
	{NULL, NULL}};
	
	int i = 0;
	const char *recorrer;
	
	va_list o;
	va_start(o, format);
	for (recorrer = format; *recorrer != '\0'; recorrer++)
	{
		while (*recorrer != '%')
		{
			_putchar(*recorrer);
			recorrer++;
		}
		recorrer++;
		while (recorrer != NULL)
		{
			if (*recorrer == *(ops[i].formato))
			{
				ops[i].f(o);
			}
			i++;
		}
		
	}
	
	return (0);
}