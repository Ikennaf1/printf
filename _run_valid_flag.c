#include "main.h"

/**
 * _run_valid_flag - Runs the function for the given flag
 * @c: The flag
 * @arg: The given arg
 * @wb: The buffer
 * Return: int or 0
 */
int _run_valid_flag(char c, va_list arg, word_buffer *wb)
{
	switch (c)
	{
		case ' ':
			_run_flag_space(arg, wb);
			break;
		case '+':
			_run_flag_plus(arg, wb);
			break;
	}
	return (0);
}
