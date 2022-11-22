#include "main.h"
#include <limits.h>

/**
 * print_num - Prints an integer
 * @list: the list of arguments the function _printf is receiving
 * Return: count digit
 */
int print_num(va_list list)
{
	unsigned int m;
	int i = 0, j = 0, k = 0, count = 0;

	k = va_arg(list, int);
	if (k <= INT_MAX && k >= INT_MIN)
	{
		if (k < 0)
		{
			k *= -1;
			_putchar('-');
			count += 1;
		}
		m = k;
		for (j = 0; (m / 10) > 0; j++)
			m /= 10;

		m = k;
		while (j != 0)
		{
			for (i = 0; i < j; i++)
				m /= 10;
			m %= 10;
			_putchar(m + '0');
			count++;
			j--;
			m = k;
		}
		_putchar(m % 10 + '0');
		count++;
	}
	else
	{
		return (-1);
	}
	return (count);
}
