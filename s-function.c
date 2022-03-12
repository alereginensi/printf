/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */

void print_s(va_list s)
{
	char *str;

	str = va_arg(s, char*);
	if (str == NULL)
	{
		printf("%s", "(nil)");
		return;
	}
	printf("%s", str);
}
