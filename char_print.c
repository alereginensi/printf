#include "main.h"

/**
 * c_printf - Prints a character.
 * @c: Character
 *
 */
int c_printf(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
