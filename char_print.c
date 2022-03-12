#include "main.h"

int c_printf(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
