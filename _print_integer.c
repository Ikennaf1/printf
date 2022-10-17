#include "main.h"

/**
 * _recursive_print_int - prints individual int
 * @n: Given integer
 * Return: nothing
 */
void _recursive_print_int(int n)
{
	if (n / 10)
	{
		_recursive_print_int(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * _print_integer - Prints an integer
 * @arg: The given integer
 * Return: Number of charcters printed
 */
int _print_integer(va_list arg)
{
	int n;
	int num = va_arg(arg, int);
	int num_char = 0;

	n = num;

	if (n < 0)
	{
		_putchar('-');
		num_char++;
		n *= -1;
		num = n;
	}

	while (n > 0)
	{
		n /= 10;
		num_char++;
	}

	_recursive_print_int(num);
	return (num_char);
}
