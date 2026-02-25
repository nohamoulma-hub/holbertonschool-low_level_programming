#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start printing from
 *
 * Description: numbers are separated by a comma and a space,
 * and the list ends at 98.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("98\n");
}
