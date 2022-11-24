#include "main.h"

/**
 * _printf - print a char or a string
 * @format: It's a character string
 * Return: the number of character the function is printing
 */
int _printf(const char *format, ...)
{
	st_fmt st_format[] = {
		{"d", print_num},
		{"i", print_num},
		{"s", print_string},
		{"c", print_char},
		{'%', print_percent}
	};

	va_list list;
	int count = 0;

	va_start(list, format);
	count =	get_match(format, list, st_format);
	va_end(list);
	return (count);
}
