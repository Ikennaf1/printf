#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct wb -Struct for the word buffer
 * @length: Length of the characters
 * @c: Containing characters
 */
typedef struct wb
{
	int length;
	char *c;
} word_buffer;

int _putchar(char c);
int _printf(const char *format, ...);
int _print(const char *format, va_list arg);
int _validate_specifier(char c);
int _print_valid_specifier(char c, va_list arg, word_buffer *wb);
int _print_invalid_specifier(char prev_char, char c);
int _print_char(va_list arg, word_buffer *wb);
int _print_string(va_list arg, word_buffer *wb);
int _print_integer(va_list arg, word_buffer *wb);
void _recursive_print_int(int n, word_buffer *wb);
int _print_binary(va_list arg, word_buffer *wb);
void _recursive_print_binary(unsigned int n, word_buffer *wb);
int _print_unsigned_integer(va_list arg, word_buffer *wb);
void _recursive_print_unsigned_integer(unsigned int n, word_buffer *wb);
int _print_octal(va_list arg, word_buffer *wb);
void _recursive_print_octal(int n, word_buffer *wb);
int _print_hexadecimal(va_list arg, word_buffer *wb);
void _recursive_print_hexadecimal(int n, word_buffer *wb);
int _print_hex(va_list arg, word_buffer *wb);
void _recursive_print_hex(int n, word_buffer *wb);
int _print_all_chars(va_list arg, word_buffer *wb);
int _validate_flag(char c);
int _run_valid_flag(char c, va_list arg, word_buffer *wb);
int _run_flag_space(va_list arg, word_buffer *wb);
int _run_flag_plus(va_list arg, word_buffer *wb);
int _run_flag_zero(va_list arg, word_buffer *wb);
int _run_flag_left_justify(va_list arg, word_buffer *wb);
int _print_string_reverse(va_list arg, word_buffer *wb);
int _print_string_rot13(va_list arg, word_buffer *wb);

/**
 * struct formatic - Struct for the formatting functions
 * @s: Identifying format options characters
 * format_string: The function to call
 */
typedef struct formatic
{
	char *s;
	int (*format_string)(va_list arg, word_buffer *wb);
} formatter;

int _word_buffer_init(word_buffer *wb);
int _word_buffer_append(word_buffer *wb, char c);
int _word_buffer_print(word_buffer *wb);

#endif /* _MAIN_H_ */
