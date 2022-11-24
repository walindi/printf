#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct st_fmt - format specifier
 * @fmt: index by function
 * @func: pointer to function _printf
 */
typedef struct st_fmt
{
	char *fmt;
	int (*func)(va_list list);

} st_fmt;



int _printf(const char *format, ...);
int _putchar(char c);
int get_match(const char *, va_list, st_fmt st_format[]);
int print_num(va_list);

int print_string(va_list);
int print_char(va_list);






#endif
