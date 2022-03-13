#include "main.h"

/**
 */
int integer_printf(va_list i)
{
	_putchar(va_arg(i, int));

	return (1);
}
