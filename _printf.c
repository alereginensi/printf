#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: list of arguments tpes passed to the function.
 *
 * Return: Same as printf standard functions
 */
int _printf(const char *format, ...)
{
	int q, j;
	va_list valist;
	q = 0;

	va_start(valist, format);
	if (format == NULL)
		return (-1);

	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			if (format[j + 1] == '\0')
			{
				return (-1);
			}
			if (format[j + 1] == '%')
			{
				_putchar(format[j + 1], j++, q++;
			}
			else
			{
				func = (*get_identifier(format[j +1]));
				break;
			}
			} j++;
	}
	else
		_putchar(format[j]), j++, q++;
	}
	va_end(valist);
	return (j);
}
