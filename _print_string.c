#include "main.h"

/**
 * _print_string - Prints formatted string
 * @arg: The given arg string
 * @wb: The buffer
 * Return: Num of char printed
 */
int _print_string(va_list arg, word_buffer *wb)
{
	int num_char = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		_word_buffer_append(wb, '(');
		_word_buffer_append(wb, 'n');
		_word_buffer_append(wb, 'u');
		_word_buffer_append(wb, 'l');
		_word_buffer_append(wb, 'l');
		_word_buffer_append(wb, ')');
	}

	while (*str)
	{
		_word_buffer_append(wb, *str);
		str++;
	}

	return (num_char);
}
