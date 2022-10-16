#include "main.h"

/**
 * _print_char - Prints a formatted char
 * @arg: The Char
 * Return: Num of chars printed
 */
int _print_char(va_list arg)
{
	_putchar(va_arg(arg, int));

	return (1);
}
