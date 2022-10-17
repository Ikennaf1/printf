#include "main.h"

/**
 * _print - Prints the chars
 * @format: The string
 * @arg: The arguments
 * Return: num of chars printed
 */
int _print(const char *format, va_list arg)
{
	int num_char = 0;
	int i = 0;
	word_buffer wb;

	_word_buffer_init(&wb);

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
				_word_buffer_append(&wb, '%');

			if (_validate_specifier(format[i]))
			{
			num_char += _print_valid_specifier(format[i], arg, &wb);
			}
		}
		else
		{
			_word_buffer_append(&wb, format[i]);
		}
		i++;
	}

	num_char = _word_buffer_print(&wb);

	return (num_char);
}
