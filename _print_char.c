#include "main.h"

/**
 * _print_char - Prints a formatted char
 * @arg: The Char
 * Return: Num of chars printed
 */
int _print_char(va_list arg)
{
	int num_char = 0;

	num_char += _putchar(va_arg(arg, int));

	return (num_char);
}
