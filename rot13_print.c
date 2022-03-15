#include "main.h"

/**
 * rot13 - encodes a string into ROT13
 * @arg: string adress
 * Return: int
 */
char rot13_printf(va_list arg)
{
	int i, j, counter = 0;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLM";
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(NULL)";
	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
				break;
		}
		if (s[i] == a[j])
		{
			_putchar(b[j]);
			count++;
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
