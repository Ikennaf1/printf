#include "main.h"

/**
 * _recursive_print_binary - converts to binary and prints a number
 * @n: The given integer
 * @wb: The buffer
 * Return: Number of printed characters
 */
void _recursive_print_binary(unsigned int n, word_buffer *wb)
{
	if (n / 2)
	{
		_recursive_print_binary(n / 2, wb);
	}

	_word_buffer_append(wb, (n % 2) + '0');
}

/**
 * _print_binary - Prints binary conversion of an unsigned int
 * @arg: The given integer
 * @wb: The buffer
 * Return: Number of characters printed
 */
int _print_binary(va_list arg, word_buffer *wb)
{
	unsigned int num_char = 0;
	unsigned int num = va_arg(arg, int);

	_recursive_print_binary(num, wb);

	return (num_char);
}
