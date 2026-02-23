#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** more headers goes there */

/**
 * main - print en fonction du nombre si il est positif, négatif, ou égal
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
