#include "holberton.h"

/**
 * _printf - Receives n arguments and prints according to the format
 * @format: String with arguments and formats
 * Return: Number of characters of the string
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	count = help(format, list);
	va_end(list);
	return (count);
}
