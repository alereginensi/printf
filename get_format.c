#include "main.h"

/**
 * get_format_func - select the correct format to print
 * @s: format passed as argument
 *
 * Return: pointer to the format that corresponds to the operator given as
 * a parameter
 */

int (*get_format_func(char *string)) (char)
{
	format_t format[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'\0', NULL}
	};

}
