#include "main.h"

/**
 */
int integer_printf(va_list i)
{
	unsigned int integer;
	integer = i;

	if (i < 0)
	{
		_putchar(45);
		integer = -i;
	}

	if (integer / 10)
	{
		integer_printf(integer / 10);
	}
	_putchar(va_arg(i, unsigned int));

	return (0);
}
