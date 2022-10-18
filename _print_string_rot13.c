#include "main.h"

/**
 * _print_string_rot13 - encrypts a string
 * @arg: Input string
 * @wb:The buffer
 * Return: final string
 */
int _print_string_rot13(va_list arg, word_buffer *wb)
{
	char *p = va_arg(arg, char *), *nul = "(null)";
	int count, swapped = 0;
	char alpha[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};
	char swap[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm'};

	if (p == NULL)
	{
		while (*nul)
		{
			_word_buffer_append(wb, *nul);
			nul++;
		}
	}
	while (*p)
	{
		count = 0;
		while (count < 52)
		{
			if (*p == alpha[count])
			{
				_word_buffer_append(wb, swap[count]);
				swapped = 1;
				break;
			}
			count++;
		}
		if (swapped == 0)
			_word_buffer_append(wb, *p);
		swapped = 0;
		p++;
	}
	return (count);
}
