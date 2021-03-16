#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_percent - writes the character %
 * @str: The character to print
 * Return: On success 1.
 */
int print_percent(char *str)
{
	str++;
	_putchar('%');
	return (1);
}

/**
 * print_char - writes the char
 * @args: The character to print
 * Return: On success 1.
 */
int print_char(va_list args)
{
	char s = va_arg(args, int);
		write(1, &s, 1);
	return (1);
}

/**
 * print_string - writes the string
 * @args: The string to print
 * Return: the length of the printed.
 */
int print_string(va_list args)
{
	char *str;
	int i, len = 0;

	str = va_arg(args, char *);
	if (!str)
		str = "";
	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		len++;
	}
	return (len);
}
