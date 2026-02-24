#include "main.h"
/**
 * print_sign - print the sign of number
 *
 * @n: check the sign nombers
 *
 * Return:1 if lowercase, 0 otherwise
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	return (0);
}
