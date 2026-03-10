#include "main.h"
#include <stdlib.h>
/**
 * _calloc - alloue de la mémoire pour un tableau et l'initialise à zéro.
 * @nmemb: nombre d'éléments dans le tableau.
 * @size: taille en octets de chaque élément.
 *
 * Description: Alloue de la mémoire pour un tableau de nmemb éléments de
 * size octets chacun. La mémoire est ensuite mise à zéro.
 * Return: pointeur vers la mémoire allouée (succès), ou NULL (échec).
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
