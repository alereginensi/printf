#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: list of arguments tpes passed to the function.
 *
 */
int _printf(const char *format, ...)
{
	int q, j;
	va_list valist;

	print_f letter[] = {
		{'c', c_printf},
		{'s', s_printf},
		{'%', percent_printf},
		{'\0', NULL},
		{'i', integer_printf},
		 /** {'d', decimal_printf},
		 */
	};


	va_start(valist, format);
	
	j = 0;
        while (format != NULL && format[j] != '\0')
	{
		if(format[j] == '%')
		{
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
	return (j);
}
