#include"main.h"

int print_percent(__attribute__((unused))va_list list)
{
	char c = '%';
	int count = 0;

	_putchar(c);
	count++;

	return (count);

}
