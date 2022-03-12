#include "main.h"

/**
 * print_c - prints a
 * @c: char to print
 *
 * Return: void
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

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
		printf("%s", "(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * _printf - produces output according to a format.
 * @format: list of arguments tpes passed to the function.
 *
 */
int _printf(const char *format, ...)
{
	int i, j;

	va_list valist;

	va_struct format[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'f', print_f},
		{'\0', NULL}
	};

	va_start(valist, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (letter)		
}

