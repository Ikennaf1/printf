#include "main.h"

/**
 * _print_string - Prints formatted string
 * @arg: The given arg string
 * Return: Num of char printed
 */
int _print_string(va_list arg)
{
	int num_char = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	while (*str)
	{
		num_char += _putchar(*str);
		str++;
	}

	return (num_char);
}
