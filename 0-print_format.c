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
}

