#include "holberton.h"

/**
 * verify_format - verify format
 * @s: String to verify
 * Return: A function to execute
 */
int (*verify_format(const char *s))()
{
	pf_o ops[] = {
	{"%", print_percent},
	{"c", print_char},
	{"s", print_string},
	{"d", print_number},
	{"i", print_number}
	};

int i = 0;
int ops_length;
const char *ptr = s;

ops_length = sizeof(ops) / sizeof(pf_o);
ptr++;

	if (*ptr != '\0')
	{
		for (i = 0; i < ops_length; i++)
		{
		if (ops[i].s[0] == ptr[0])
		{
			return (ops[i].f);
		}
	}
}
	return (NULL);
}
