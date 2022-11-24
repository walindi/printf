#include"main.h"

int print_char(va_list list)
{
	int count = 0;
	char c = va_arg(list, int);
	
	_putchar(c);
	count++;

	return(count);
}
	
