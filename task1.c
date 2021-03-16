#include "holberton.h"
/**
*print_number - print numbers
*@args: args
*Return: length
*/
int print_number(va_list args)
{unsigned int abs_num, absolut, countdigit, div = 1, i, num, lastdigit, digits;
int original_number, length = 0;
char n;
original_number = va_arg(args, int);

if (original_number < 0)
{	write(1, "-", 1);
	abs_num = -1 * original_number;
	absolut = -1 * original_number;
	length++;
}
else
{	abs_num = original_number;
	absolut = original_number;
}
for (countdigit = 1; abs_num / 10 > 0; countdigit++)
	abs_num = abs_num / 10;
for (i = countdigit - 1; i > 0; i--)
	div = div * 10;
for (digits = countdigit; digits >= 1; digits--)
{num = absolut / div;
if (num >= 10)
{	lastdigit = num % 10;
	n = lastdigit + '0';
	write(1, &n, 1);
	length++;
}
else
{	n = num + '0';
	write(1, &n, 1);
	length++;
}
div = div / 10;
}
return (length);
}
