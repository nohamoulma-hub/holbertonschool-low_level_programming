#include "main.h"
#include <stddef.h>
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	int index = 0;

	if (s[index] == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (s[0]);
	_puts_recursion(s + 1);
}
