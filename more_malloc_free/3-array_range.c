#include "main.h"
#include <stdlib.h>
/**
 * array_range - crée un tableau d'entiers contenant une plage de valeurs.
 * @min: la valeur de départ (incluse).
 * @max: la valeur de fin (incluse).
 *
 * Description: Le tableau contient toutes les valeurs de min à max,
 * ordonnées du plus petit au plus grand.
 * Return: pointeur vers le nouveau tableau, ou NULL si min > max
 * ou si malloc échoue.
 */
int *array_range(int min, int max)
{
	int *tab;
	int i = 0;

	if (min > max)
		return (NULL);
	tab = malloc((max - min + 1) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
		tab[i] = min + i;
	return (tab);
}
