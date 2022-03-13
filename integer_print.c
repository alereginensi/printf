#include "main.h"

/**
 */
int integer_printf(va_list i)
{
	unsigned int integer, y, x;
	int num, len;

	num = va_arg(i, int);

	if (num < 0)
	{
		_putchar(45);
		integer = num * -1;
	}
	else
	{
		integer = num;
	}
	y = integer;
	x = 1;

	while (y > 9)
	{
		y /= 10;
		x *= 10;
	}
	for (; x >= 1; x /= 10)
	{
		len += _putchar(((integer / x) % 10) + '0');
	}
	return (len);
}
