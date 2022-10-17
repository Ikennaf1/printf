#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: The give n string format
 * Return: Number of characters printed excluding null byte character
 */
int _printf(const char *format, ...)
{
	unsigned int num_char = 0;
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	num_char = _print(format, arg);

	va_end(arg);

	return (num_char);
}
