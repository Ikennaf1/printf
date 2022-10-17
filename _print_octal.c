#include "main.h"

/**
 * _recursive_print_octal - Prints base 8 conversion of a number
 * @n: Given integer
 * Return: Void
 */
void _recursive_print_octal(int n, word_buffer *wb)
{
	if (n / 8)
		_recursive_print_octal(n / 8, wb);

	_word_buffer_append(wb, (n % 8) + '0');
}

/**
 * _print_octal - Prints base 8 conversion of an integer
 * @arg: Given arg
 * Return: The converted number
 */
int _print_octal(va_list arg, word_buffer *wb)
{
	int num_char = 0;
	int num = va_arg(arg, int);

	if (num < 0)
	{
		_word_buffer_append(wb, '-');
		num *= -1;
	}

	_recursive_print_octal(num, wb);

	return (num_char);
}
