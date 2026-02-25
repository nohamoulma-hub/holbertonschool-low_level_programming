#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int dernchiffre;

	dernchiffre = n % 10;

	if (dernchiffre < 0)
	{
		dernchiffre = -dernchiffre;
		_putchar(dernchiffre + '0');
	}
		_putchar(dernchiffre + '0');
		return (dernchiffre);
}
