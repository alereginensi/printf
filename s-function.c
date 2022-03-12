#include "main.h"

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */

<<<<<<< HEAD
void s_print(va_list s)
=======
int print_s(va_list s)
>>>>>>> 02bdc3772f5446054528d02708c6d1db0d6276be
{
	char *str;
	int i = 0;

	str = va_arg(s, char*);
	if (str == NULL)
	{
		write(1, "(nil)", 7);
		return;
	}
	for (i = 0; str[i] != '\0'; i++)
		_putchar(i);

	return (0);
}
