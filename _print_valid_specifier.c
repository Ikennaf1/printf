#include "main.h"

/**
 * _print_valid_specifier - Formats and prints the args for a specifier
 * @c: Each character of given arg
 * @arg: The arg
 * @wb: The buffer
 * Return: Number of characters printed
 */
int _print_valid_specifier(char c, va_list arg, word_buffer *wb)
{
	int i = 0;
	int num_char = 0;
	formatter specs[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_integer},
		{"i", _print_integer},
		{"u", _print_unsigned_integer},
		{"b", _print_binary},
		{"o", _print_octal},
		{"x", _print_hex},
		{"X", _print_hexadecimal},
		{"S", _print_all_chars},
		/*{"p", _print_pointer},*/
		{"r", _print_string_reverse},
		{"R", _print_string_rot13},
		{NULL, NULL}
	};

	while (specs[i].s)
	{
		if (*specs[i].s == c)
		{
			specs[i].format_string(arg, wb);
		}
		i++;
	}
	return (num_char);
}
