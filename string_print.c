#include "main.h"

/**
 * s_printf - prints a string
 * @s: string to print
 *
 * Return: 1
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
