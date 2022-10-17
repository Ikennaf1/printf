#include "main.h"

/**
 * _recursive_print_octal - Prints base 8 conversion of a number
 * @n: Given integer
 * Return: Void
 */
void _recursive_print_octal(int n)
{
	if (n / 8)
		_recursive_print_octal(n / 8);

	_putchar((n % 8) + '0');
}

/**
 * _print_octal - Prints base 8 conversion of an integer
 * @arg: Given arg
 * Return: The converted number
 */
int _print_octal(va_list arg)
{
	int n, num_char = 0;
	int num = va_arg(arg, int);

	n = num;

	if (num < 0)
	{
		_putchar('-');
		n *= -1;
		num = n;
	}

	while (n > 0)
	{
		n /= 8;
		num_char++;
	}

	_recursive_print_octal(num);

	return (num_char);
}
