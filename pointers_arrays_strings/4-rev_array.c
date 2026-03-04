#include "main.h"
/**
 * reverse_array - inverse le contenu d'un tableau d'entiers
 * @a: le tableau d'entiers
 * @n: le nombre d'éléments dans le tableau
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int c = 0;

	while (a[i] != n)
	{
		i++;
	}
	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
