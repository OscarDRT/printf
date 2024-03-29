#include "holberton.h"
/**
 * op_char - Prints char
 * @a: Char to print
 * Return: Number of characters of the char
 */
int op_char(va_list a)
{
	_putchar(va_arg(a, int));
	return (1);
}
/**
 * op_string - Prints string
 * @a: String to print
 * Return: Number of characters of the string
 */
int op_string(va_list a)
{
	char *pl = va_arg(a, char *);
	int i  = 0;

	if (pl == NULL)
	{
		pl = "(null)";
		while (pl[i] != '\0')
		{
			_putchar(pl[i]);
			i++;
		}
		return (i);
	}
	while (pl && pl[i] != '\0')
	{
		_putchar(pl[i]);
		i++;
	}
	return (i);
}
