#include "main.h"
#include<stdio.h>
/**
 * print_array - imprime n éléments d'un tableau d'entiers
 * @a: le tableau d'entiers à parcourir
 * @n: le nombre d'éléments à imprimer
 *
 * Description: les nombres sont séparés par une virgule et un espace.
 * La ligne se termine par un retour à la ligne.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
