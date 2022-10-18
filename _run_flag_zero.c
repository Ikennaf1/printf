#include "main.h"

/**
 * _run_flag_zero - Runs the zero flag function
 * @arg: The given argument
 * @word_length: size of padding
 * @wb: The buffer
 * Return: 1 or int
 */
int _run_flag_zero(va_list arg, word_buffer *wb)
{
	int num_char = 0;
	int num = va_arg(arg, int);

	if (num >= 0)
	{
		_word_buffer_append(wb, '+');
	}
	else
	{
		_word_buffer_append(wb, '-');
		num *= -1;
	}
	_recursive_print_int(num, wb);
	return (num_char);
}
