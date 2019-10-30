#include "holberton.h"
int iteration(const char *format, va_list o);
int (*f)(va_list);
/**
 * _printf - Receives n arguments and prints according to the format
 * @format: String with arguments and formats
 * Return: Number of characters of the string
 */
int _printf(const char *format, ...)
{
	int conteo;
	va_list o;

	if (format == NULL || o == NULL)
		return (-1);
	va_start(o, format);
	conteo = iteration(format, o);
	va_end(o);
	return (conteo);
}
/**
 * iteration - Receives n arguments and prints according to the format
 * @format: String with arguments and formats
 * @o: The list
 * Return: Number of characters of the string
 */
int iteration(const char *format, va_list o)
{
	const char *recorrer;
	int conteo = 0, a;

	for (recorrer = format; recorrer && *recorrer != '\0';)
	{
		if (*recorrer == '%')
		{
			if (*(recorrer + 1) == '\0')
				return (-1);
			while (*(recorrer + 1) == ' ')
				recorrer++;
			if (*(recorrer + 1) == '%')
			{
				_putchar(*(recorrer + 1));
				recorrer += 2;
				conteo++;
				a = 1;
			}
			else if (*(recorrer + 1) == 'c')
			{
			conteo = conteo + op_char(o);
			recorrer += 2;
			a = 1;
			}
			else if (*(recorrer + 1) == 's')
			{
			conteo = conteo + op_string(o);
			recorrer += 2;
			a = 1;
			}
			else if (*(recorrer + 1) == 'd')
			{
			conteo = conteo + op_string(o);
			recorrer += 2;
			a = 1;
			}
			else if (*(recorrer + 1) == 'i')
			{
			conteo = conteo + op_string(o);
			recorrer += 2;
			a = 1;
			}
			else
			{
				recorrer++;
				if (a == 0 && *(recorrer - 1) == '%')
				{
					_putchar(*(recorrer - 1));
					_putchar(*recorrer);
					conteo += 2;
				}
				recorrer++;
			}
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
