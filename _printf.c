#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_identifier - gets the correct identifier to print
 * @formatt: type of format
 * Return: pointer to function
 */
int (*get_identifier(char formatt))(va_list)
{
	print_f letter[] = {
		{'c', c_printf},
		{'s', s_printf},
		{'i', number_printf},
		{'d', number_printf},
		{'\0', NULL},
	};
	int i = 0;

	for (i = 0; letter[i].string; i++)
	{
		if (formatt == letter[i].string)
			return (letter[i].func);
	}
	return (NULL);
}

/**
 * _printf - produces output according to a format.
 * @format: list of arguments tpes passed to the function.
 * Return: Same as printf standard functions
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, counter = 0;
	int (*func)(va_list);

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]), i++, counter++;
			}
			else
			{
				func = (*get_identifier(format[i + 1]));
				if (func != NULL)
				{
					counter += func(arg), i++;
				}
				else
					_putchar(format[i]), i++;
			} i++;
		}
		else
			_putchar(format[i]), i++, counter++;
	}
	va_end(arg);
	return (counter);
}
