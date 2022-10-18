#include "main.h"

/**
 * _validate_flag - Validates given flag
 * @c: The flag
 * Return: 1 if valid. 0 if not valid
 */
int _validate_flag(char c)
{
	char flags[] = {' ', '+', '#', '0', '-'};
	int i = 0;

	while (flags[i])
	{
		if (flags[i] == c)
			return (1);

		i++;
	}
	return (0);
}
