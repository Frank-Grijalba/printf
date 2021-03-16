#include "holberton.h"

/**
*_printf - printf function
*@format: String to print
*Return: Number of characters printed
*/

int _printf(const char *format, ...)
{
	int count = 0;
	const char *prntfrm;
	int (*f)();
	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		return (0);
	}

	for (prntfrm = format; *prntfrm; prntfrm++)
	{
		if (*prntfrm == '%')
		{
		f = verify_format(prntfrm);

			if (f)
			{
				count = count + f(args, format);
				prntfrm++;
			}
			else
			{
				_putchar(*prntfrm);
				count++;
			}
		}
		else
		{
			_putchar(*prntfrm);
			count++;
		}
	}
	va_end(args);
	return (count);
}
