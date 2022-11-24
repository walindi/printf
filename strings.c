#include"main.h"

/**
 * print_string - prints strings and char
 * @list: the list of arguments to the _printf function
 * Return: count digit
 */

int print_string(va_list list)
{
	char* s = list;

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
