#include "main.h"

/**
 * _print_valid_specifier - Formats and prints the args for a specifier
 * @c: Each character of given arg
 * @arg: The arg
 * Return: Number of characters printed
 */
int _print_valid_specifier(char c, va_list arg)
{
	int i = 0, num_char = 0;
	formatter specs[] = {
		{"c", _print_char},
		{"s", _print_string},
		{NULL, NULL}
	};

	while (specs[i].s)
	{
		if (*specs[i].s == c)
		{
			num_char += specs[i].format_string(arg);
		}
		i++;
	}
	return (num_char);
}
