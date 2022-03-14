#include "main.h"

/**
 * c_printf - Prints a character
 * @c: Character
 *
 * Return: 1
 */
int c_printf(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * s_printf - prints a string
 * @s: string to print
 *
 * Return: length of string
 */

int s_printf(va_list s)
{
	char *str;
	int i = 0;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
