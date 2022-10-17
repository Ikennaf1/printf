#include "main.h"

/**
 * _recursive_print_binary - converts to binary and prints a number
 * @n: The given integer
 * Return: Number of printed characters
 */
void _recursive_print_binary(unsigned int n)
{
	if (n / 2)
	{
		_recursive_print_binary(n / 2);
	}

	_putchar((n % 2) + '0');
}

/**
 * _print_binary - Prints binary conversion of an unsigned int
 * @arg: The given integer
 * Return: Number of characters printed
 */
int _print_binary(va_list arg)
{
	unsigned int num_char = 0;
	unsigned int num = va_arg(arg, int);
	unsigned int n = num;

	while (n > 0)
	{
		n /= 2;
		num_char++;
	}
	_recursive_print_binary(num);

	return (num_char);
}
