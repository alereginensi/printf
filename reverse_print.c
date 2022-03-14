#include "main.h"

/**
 * reverse_printf.c - prints a reversed string
 * @s: string to reverse
 *
 * Return: length
 */

int reverse_printf(va_list r)
{
	char *str;
	int i = 0;
	int j = 0;

	str = va_arg(r, char *);

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(str[j]);
	}
	return(i);
}
