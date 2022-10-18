#include "main.h"

/**
 * _print_pointer: Prints a pointer address
 * @arg: The given pointer address
 * @wb: The buffer
 * Return: Int or 0
 */
/*int _print_pointer(va_list arg, word_buffer *wb)
{
	int num_char = 0;
	void *pointer = malloc(8);
	char *s;
	pointer = va_arg(arg, void *);
	s = (char *) pointer;

	while (*s)
	{
		_word_buffer_append(wb, *s);
		s++;
	}
	_print_hex(va_arg(arg, char *), wb);
	free(pointer);

	return (num_char);
}*/
