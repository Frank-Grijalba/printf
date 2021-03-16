#ifndef HOLBERTON
#define HOLBERTON

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
* struct printformopt - struct with the functions to return
* this file contains the functions to be invoked in the project
* @s: String to compare
* @f: Function to execute
*/
typedef struct printformopt
{
	char *s;
	int (*f)();
} pf_o;

int _putchar(char c);
int print_percent(char *str);
int print_char(va_list args);
int print_string(va_list args);
int print_number(va_list args);
int (*verify_format(const char *s))();
int _printf(const char *format, ...);

#endif
