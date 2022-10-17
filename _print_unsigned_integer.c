#include "main.h"

/**
 * _recursive_print_unsigned_integer - Prints unsigned int recursively
 * @n: The give n int
 * Return: Void
 */
void _recursive_print_unsigned_integer(unsigned int n)
{
	if (n / 10)
	{
		_recursive_print_unsigned_integer(n / 10);
	}

	_putchar((n % 10) + '0');
}

/**
 * _print_unsigned_integer - Prints unsigned integer
 * @arg: the given integer
 * Return: Number of characters printed
 */
int _print_unsigned_integer(va_list arg)
{
	unsigned int num_char = 0, num = va_arg(arg, unsigned int);
	int n = num;

	while (n > 0)
	{
		n /= 10;
		num_char++;
	}
	_recursive_print_unsigned_integer(num);

	return (num_char);
}
