#include "main.h"

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */

void print_s(va_list s)
{
	char *str;

	str = va_arg(s, char*);
	if (str == NULL)
	{
		write(1, "(nil)", 7);
		return;
	}
	for (i = 0; str[i] != '\0', i++)
		_putchar(i);
}
