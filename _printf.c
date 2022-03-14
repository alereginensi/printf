#include "main.h"

/**
 * get_identifier - gets the correct identifier to print
 * @format: type of format
 * Return: pointer to function
 */
int (*get_identifier(char format))(va_list)
{
	print_f letter[] = {
		{'c', c_printf},
		{'s', s_printf},
		{'i', number_printf},
		{'d', number_printf},
		{'u', unsigned_printf},
		{'r', reverse_printf},
		{'\0', NULL},
	};
	int i = 0;

	for (i = 0; letter[i].string; i++)
	{
		if (format == letter[i].string)
			break;
	}
	return (letter[i].func);

/**
 * _printf - produces output according to a format.
 * @format: list of arguments tpes passed to the function.
 *
 * Return: Same as printf standard functions
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, counter = 0;
	int (*func)(va_list);

	if (!format || (format[0] == '%' && format [1] == '\0'))
		return (-1);
	va_start(arg, format);
	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format [i + 1] == '%')
			{
				_putchar(format[i]);
				i++;
				counter++;
			}
			else if (format[i + 1] == '\0')
			{
				format = get_identifier(format[i + 1]);
				counter++;
				return (counter);
			}
			else
			{
				_putchar(format[i]);
				counter++;
			}
		}
	}
	va_end(arg);
	return (counter);
}
}
