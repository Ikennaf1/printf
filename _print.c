#include "main.h"

/**
 * _print - Prints the chars
 * @format: The string
 * @arg: The arguments
 * Return - num of chars printed
 */
int _print(const char *format, va_list arg)
{
	int num_char = 0;
	int i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				num_char += _putchar(format[i]);

			if (_validate_specifier(format[i]))
			{
			num_char += _print_valid_specifier(format[i], arg);
			}
		}
		else
		{
			num_char += _putchar(format[i]);
		}
		i++;
	}
	if (arg)
	{}
	return (num_char);
}
