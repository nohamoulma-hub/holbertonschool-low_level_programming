#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int compteur;
	unsigned int nombre;
	va_list args;

	if (separator == NULL)
		printf(" ");
	va_start(args, n);
	for (compteur = 0; compteur < n; compteur++)
	{
		nombre = va_arg(args, int);
		printf("%d", nombre);
		if (compteur < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
