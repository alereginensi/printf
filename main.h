#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct _printf
{
	char string;
	void (*func)(va_list);
};

int _putchar(char c);
int _printf(const char *format, ...);

#endif
