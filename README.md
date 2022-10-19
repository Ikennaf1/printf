# printf
-------------------------------------------------------------------------------
This printf project is a collaboration between *Tebogo Kgonothi* and *Ikenna Isiogu*, students of Software Engineering at Alx africa. The project contains a function name "printf" which imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".

The objective of the printf project is to learn the base functionality of printf, take those concepts and apply them ourselfves to create a new printf that works like the one in the library.

printf() is a function that performs formatted output conversion and print data on the screen.Its prototype is the following:

int _printf(const char *format, ...)

## Character specifier
---

| Specifier |    Character  |
| ----------| --------------|
|S          | String of characters|
|c          | Single character|
|d or i     | Signed decimal integer|
|o			| Signed octal (base 8) |
|u			| Unsigned decimal integer|
|x			| Unsigned hexadecimal integer |
|X			| Unsigned hexadecimal integer (Capital letters) |
|p			| Pointer address		|
|%			| % character  | 

## Project Requirements
------------------------------------------------------------------------------
- All files will be compiled on Ubuntu 14.04 LTS
Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- Your code should use the Betty style
- You are not allowed to use global variables
- Authorized functions and macros:
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Custom printf function
------------------------------------------------------------------------------
### Files and functions
------------------------------------------------------------------------------

- *_putchar.c:*
	- int _putchar(char c) - function to print char
- *strlen.c:*
	- int _strlen(char *string) - gets string length
- *get_bin.c:*
	- int_bin(va_list bin) - function to print
- *get_char.c:*
	- int ch(va_list character) -  function to return char
- *get_hex.c:*
	- int _hex_str(unsigned int n, unsigned int hex, char alpha) - converts the number from base 10 to hex 
- *get_inc.c:*
	- int _int(va_list integ) - function to print integers
- *get_oct.c:*
	- int _oct(va_list octo) - function to print octal
- *get_rot13.c*
	- int _rot13(va_list rot) - prints rot13 version
- *get_str.c:*
	- int str(va_list *s) - prints string to stdout
- *get_unsigned.c:*
	- int _ui(va_list unsign) - unsigned int print to stdout
- main.h: header file
- man_printf: _printf man page
- printf.c: main custom _printf function 
	
### End  

   
