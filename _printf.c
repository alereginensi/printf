#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: list of arguments tpes passed to the function.
 *
 * Return: Same as printf standard functions
 */
int _printf(const char *format, ...)
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
        int q, j;
        va_list valist;

	va_start(valist, format);

	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			if (format[j + 1] == '%')
			{
				_putchar(format[j + 1]);
					j++;
					break;
			}
			q = 0;
			while (letter[q].string != '\0')
			{
				if (format[j + 1] == letter[q].string)
				{
					letter[q].func(valist);
					j++;
					break;
				}
				q++;
			}
			j++;
		}
		else
		{
			_putchar(format[j]);
			j++;
	}
	}
	va_end(valist);
	return (j - 1);
}
