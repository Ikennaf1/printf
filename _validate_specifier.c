#include "main.h"

/**
 * _validate_specifier - Validates given specifier
 * @c: The specifier
 * Return: 1 if valid. 0 if not valid
 */
int _validate_specifier(char c)
{
	char specifiers[] = {'c', 's', 'd', 'i', 'b', 'u'};
	int i = 0;

	while (specifiers[i])
	{
		if (specifiers[i] == c)
			return (1);

		i++;
	}
	return (0);
}
