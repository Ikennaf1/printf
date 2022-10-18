#include "main.h"

/**
 * _recursive_print_hex - Prints base 16 of a given integer
 * @n: Given integer
 * @wb: The buffer
 * Return: Void
 */
void _recursive_print_hex(int n, word_buffer *wb)
{
	if (n / 16)
		_recursive_print_hex(n / 16, wb);

	switch (n % 16)
	{
		case 10:
			_word_buffer_append(wb, 'a');
			break;
		case 11:
			_word_buffer_append(wb, 'b');
			break;
		case 12:
			_word_buffer_append(wb, 'c');
			break;
		case 13:
			_word_buffer_append(wb, 'd');
			break;
		case 14:
			_word_buffer_append(wb, 'e');
			break;
		case 15:
			_word_buffer_append(wb, 'f');
			break;
		default:
			_word_buffer_append(wb, (n % 16) + '0');
	}
}

/**
 * _print_hex - Prints base 16 conversion of an integer
 * @arg: The given integer
 * @wb: The buffer
 * Return: Number of characters printed
 */
int _print_hex(va_list arg, word_buffer *wb)
{
	int num_char = 0;
	int num = va_arg(arg, int);

	if (num < 0)
	{
		_word_buffer_append(wb, '-');
		num *= -1;
	}

	_recursive_print_hex(num, wb);

	return (num_char);
}
