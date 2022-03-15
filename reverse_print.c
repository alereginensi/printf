#include "main.h"

/**
 */

int reverse_printf(va_list arg)
{
	int i = 0, counter = 0;
	char *str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(str[i]);
		counter++;
	}
	return (counter);
}
