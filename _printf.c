#include "holberton.h"
/**
 * _printf - Receives n arguments and prints according to the format
 * @format: String with arguments and formats
 * Return: Number of characters of the string
 */
int _printf(const char *format, ...)
{
	const char *recorrer;
	int conteo;
	va_list o;

	va_start(o, format);
	if (format == NULL)
		return (-1);
	for (recorrer = format; recorrer && *recorrer != '\0';)
	{
		if (*recorrer == '%')
		{
			while (*(recorrer + 1) == ' ')
				recorrer++;
			if (*(recorrer + 1) == '%')
			{
				_putchar(*(recorrer + 1));
				recorrer += 2;
				conteo++;
			}
			else if (*(recorrer + 1) == 'c')
			{
			conteo = conteo + op_char(o);
			recorrer += 2;
			}
			else if (*recorrer != 'c' && *recorrer != ' '
			&& *recorrer != '%' && *recorrer != '\0')
			{
				_putchar(*recorrer);
				recorrer++;
			}
			else
				recorrer++;
		}
		else
		{
			_putchar(*recorrer);
			conteo++;
			recorrer++;
		}
	}
return (conteo);
}
