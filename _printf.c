#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: list of arguments tpes passed to the function.
 *
 */
int _printf(const char *format, ...)
{
	int i, j;
	va_list valist;

	print_f letter[] = {
		{'c', c_printf},
		{'s', s_printf},
		{'%', percent_printf},
		{'\0', NULL},
	};


	va_start(valist, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (letter[j].string != '\0')
		{
			if (letter[j].string == format[i])
			{
				letter[j].func(valist);
			}
			j++;
		}
		i++;
	}
	va_end(valist);

	return (i);
}
