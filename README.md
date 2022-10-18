# A poor man's printf function 

#printf()

This printf project is a collaboration between Tebogo Kgonothi and Ikenna Isiogu, students of Software Engineering at Alx africa. The project contains a function name "printf" imitates the actual "prinf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".

The objective of the printf project is to learn the base functionality of printf, take those concepts and apply them ourselfves to create a new printf that works like the one in the library.

"printf" is a function that performs formatted output conversion and print data on the screen.Its prototype is the following:

	**int _printf(const char *format, ...)**

Where format contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.
Specifier	Output
