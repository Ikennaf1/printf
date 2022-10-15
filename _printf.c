#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: The give n string format
 * Return: Number of characters printed excluding null byte character
 */
int _printf(const char *format, ...)
{
	int num_char = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	num_char = _print(format, args);

	va_end(args);

	return (num_char);
}
