#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - defines a new struct
 * @string: string passed by argument
 * @func: function type
 *
 * Description: Above
 */

typedef struct print
{
	char string;
	int (*func)(va_list);
} print_f;

int _putchar(char c);

int _printf(const char *format, ...);

int c_printf(va_list c);

int s_printf(va_list s);

int percent_printf(va_list percent);

int number_printf(va_list i);

int number_printf(va_list d);

int unsigned_printf(va_list u);

int reverse_printf(va_list r);

#endif
