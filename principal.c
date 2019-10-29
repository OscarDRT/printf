#include "holberton.h"
​
int _printf(const char *format, ...)
{
	data ops[] = {
	/*{'%', op_mod},*/
	{"c", op_char},
	/**
	{"s", op_string},
	{"d", op_int_b10},
	{"i", op_integer},
	*/
	{NULL, NULL}};
	
	int i = 0;
	const char *recorrer;
	
	va_list o;
	va_start(o, format);
	for (recorrer = format; recorrer && *recorrer != '\0'; recorrer++)
	{
		while (*recorrer != '%')
		{
			_putchar(*recorrer);
			recorrer++;
		}
		recorrer++;
		while (recorrer != NULL)
		{
			while (*recorrer != *(ops[i].formato) && *recorrer != '%')
			{
				_putchar(*recorrer);
				recorrer++;
			}
			if (*recorrer == *(ops[i].formato))
			{
				ops[i].f(o);
				recorrer++;
			}
			recorrer++;
			i++;
		}
		
	}
	return (0);
}