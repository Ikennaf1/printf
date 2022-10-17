#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _print(const char *format, va_list arg);
int _validate_specifier(char c);
int _print_valid_specifier(char c, va_list arg);
int _print_invalid_specifier(char prev_char, char c);
int _print_char(va_list arg);
int _print_string(va_list arg);
int _print_integer(va_list arg);
void _recursive_print_int(int n);
int _print_binary(va_list arg);
void _recursive_print_binary(unsigned int n);
int _print_unsigned_integer(va_list arg);
void _recursive_print_unsigned_integer(unsigned int n);
int _print_octal(va_list arg);
void _recursive_print_octal(int n);
int _print_hexadecimal(va_list arg);
void _recursive_print_hexadecimal(int n);
int _print_hex(va_list arg);
void _recursive_print_hex(int n);

/**
 * struct formatic - Struct for the formatting functions
 * @s: Identifying format options characters
 * format_string: The function to call
 */
typedef struct formatic
{
	char *s;
	int (*format_string)(va_list arg);
} formatter;

#endif /* _MAIN_H_ */
