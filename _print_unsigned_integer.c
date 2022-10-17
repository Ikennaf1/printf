#include "main.h"

/**
 * _recursive_print_unsigned_integer - Prints unsigned int recursively
 * @n: The give n int
 * Return: Void
 */
void _recursive_print_unsigned_integer(unsigned int n, word_buffer *wb)
{
	if (n / 10)
	{
		_recursive_print_unsigned_integer(n / 10, wb);
	}

	_word_buffer_append(wb, (n % 10) + '0');
}

/**
 * _print_unsigned_integer - Prints unsigned integer
 * @arg: the given integer
 * Return: Number of characters printed
 */
int _print_unsigned_integer(va_list arg, word_buffer *wb)
{
	unsigned int num_char = 0, num = va_arg(arg, unsigned int);

	_recursive_print_unsigned_integer(num, wb);

	return (num_char);
}
