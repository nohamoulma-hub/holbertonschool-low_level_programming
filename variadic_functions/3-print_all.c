#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - Prints anything, followed by a new line.
 * @format: A list of types of arguments passed to the function.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float, or
 * char * is ignored. If a string is NULL, (nil) is printed.
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *sep = "";
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				sep = ", ";
				break;
			}
			default:
				break;
		}
		index++;
	}
	printf("\n");
	va_end(args);
}
