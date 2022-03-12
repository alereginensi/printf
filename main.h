#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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



#endif
