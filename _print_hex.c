#include "main.h"

/**
 * _recursive_print_hex - Prints base 16 of a given integer
 * @n: Given integer
 * Return: Void
 */
void _recursive_print_hex(int n)
{
	if (n / 16)
		_recursive_print_hex(n / 16);

	switch(n % 16)
	{
		case 10:
			_putchar('a');
			break;
		case 11:
			_putchar('b');
			break;
		case 12:
			_putchar('c');
			break;
		case 13:
			_putchar('d');
			break;
		case 14:
			_putchar('e');
			break;
		case 15:
			_putchar('f');
			break;
		default:
			_putchar((n % 16) + '0');
	}
}

/**
 * _print_hex - Prints base 16 conversion of an integer
 * @arg: The given integer
 * Return: Number of characters printed
 */
int _print_hex(va_list arg)
{
	int n, num_char = 0;
	int num = va_arg(arg, int);

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
		n /= 16;
		num_char++;
	}

	_recursive_print_hex(num);

	return (num_char);
}
