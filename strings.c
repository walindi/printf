#include"main.h"
#include <stddef.h>

/**
 * print_string - prints strings and char
 * @list: the list of arguments to the _printf function
 * Return: count digit
 */

int print_string(va_list list)
{
	int count;
	char *s = va_arg(list, char *);

	if (s != NULL)
	{
		while (*s)
		{
			_putchar(*s++);
			count++;
		}
	}
	return (count);
}



