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
	int q = 0;

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
	while (letter[q].string != '\0')
	{
		if (format == letter[q].string)
		{
			return (letter[q].func);
		}
		q++;
	}
	return (NULL);
}
