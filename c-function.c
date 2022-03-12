#include "main.h"

int c_printf(va_list c)
{
	char c = va_arg(args, int);

	_putchar(c);
}
