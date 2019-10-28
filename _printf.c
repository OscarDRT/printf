#include "holberton.h"
int _printf(const char *format, ...)
{
	data ops[] = {
	    /*{'%', op_mod},*/
	{"c", op_char},
	{"s", op_string},
	    /**
	{"d", op_int_b10},
	{"i", op_integer},
	*/
	    {NULL, NULL}};

	int a, i = 0;
	const char *recorrer;

	va_list o;
	va_start(o, format);
	for (recorrer = format; recorrer && *recorrer != '\0';)
	{
		while (*recorrer != '%' && *recorrer != '\0')
		{
			_putchar(*recorrer);
			recorrer++;
		}
		if (*(recorrer + 1) == '%')
		{
			recorrer++;
			_putchar(*recorrer);
		}
		if (*recorrer != '\0')
		{
			recorrer++;
		}
		while (*recorrer == ' ')
		{
			recorrer++;
		}
		while (recorrer != NULL && *recorrer != '\0')
		{
			if (a == 1)
				i = 0;
			while (*recorrer != *(ops[i].formato) && *recorrer != '%')
			{
				if (*recorrer != '\0')
				{
					_putchar(*recorrer);
					recorrer++;
				}
				if (*recorrer == '\0')
					break;
				a = 0;
			}
			if (*recorrer == *(ops[i].formato))
			{
				ops[i].f(o);
				while (*(recorrer + 1) != '%' && *recorrer != '\0')
				{
					recorrer++;
					if (*recorrer == '\0')
						break;
					_putchar(*recorrer);
				}
				a = 1;
			}
			i++;
		}
	}
	return (0);
}
