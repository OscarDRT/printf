#include "holberton.h"

/**
 * help - function that evaluates possible cases
 * @format: String with arguments and formats
 * @list: The list
 * Return: Number of characters of the string
 */
int help(const char *format, va_list list)
{
	int i, count = 0;
	data ops[] = {
		{'c', op_char}, {'s', op_string}, {'\0', NULL}
	};

	while (format && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == '%')
			{
				_putchar(*format);
				count++;
			}
			if (*format != '%' && *format != 'c' && *format != 's')
			{
				_putchar(*(format - 1));
				_putchar(*format);
				count += 2;
			}
				i = 0;
			while (i < 2)
			{
				if (ops[i].c == *format)
					count += ops[i].fun(list);
				i++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	return (count);
}
