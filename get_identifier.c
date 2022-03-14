#include "main.h"

/**
 * get_identifier - gets identifier
 * @s: string
 *
 * Return: pointer to the function that
 * corresponds to the letter given as a parameter
 */
int (*get_identifier(char *s))(int, int)
{
	print_f letter[] = {
		{'c', c_printf},
		{'s', s_printf},
		{'%', percent_printf},
		{'i', number_printf},
		{'d', number_printf},
		{'u', unsigned_printf},
		{'r', reverse_printf},
		{'\0', NULL},
};
