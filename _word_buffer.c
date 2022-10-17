#include "main.h"

/**
 * _word_buffer_init - Initializes a word buffer
 * @wb: The given word buffer
 * Return: 1 on success, 0 on failure
 */
int _word_buffer_init(word_buffer *wb)
{
	wb->length = 0;
	wb->c = malloc(1024);

	if (wb->c == NULL)
	{
		free(wb);
		return (0);
	}
	return (1);
}

/**
 * _word_buffer_append - Appends a char to the word buffer
 * @wb: The given word buffer
 * @c: Character to append
 * Return: 1 if successful, 0 if not successful
 */
int _word_buffer_append(word_buffer *wb, char c)
{
	int position = wb->length;

	wb->c[position] = c;

	if (wb->c[position] == c)
	{
		(wb->length)++;
		return (1);
	}
	return (0);
}

/**
 * _word_buffer_print - Prints the contents of the buffer to standard output
 * @wb: The buffer
 * Return: Number of characters printed
 */
int _word_buffer_print(word_buffer *wb)
{
	return (write(1, wb->c, wb->length));
}
