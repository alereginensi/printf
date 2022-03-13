#include "main.h"

/**
 */
int decimal_printf(va_list d)
{
	unsigned int decimal, y, x;
	int num, len;

	num = va_arg(d, int);

	if (num < 0)
	{
		_putchar(45);
		decimal = num * -1;
	}
	else
	{
		decimal = num;
	}
	y = decimal;
	x = 1;

	while (y > 9)
	{
		y /= 10;
		x *= 10;
	}
	for (; x >= 1; x /= 10)
	{
		len += _putchar(((decimal / x) % 10) + '0');
	}
	return (len);
}
