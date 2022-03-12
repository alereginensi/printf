#include "main.h"

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */

int s_printf(va_list s)
{
	char *str;
	int i = 0;

	str = va_arg(s, char*);
	if (str == NULL)
	{
		write(1, "(nil)", 7);
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(i);

	return (0);
}
