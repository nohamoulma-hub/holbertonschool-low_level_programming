#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - exécute une fonction donnée sur chaque
 * élément d'un tableau
 * @array: le tableau d'entiers à parcourir.
 * @size: la taille du tableau.
 * @action: pointeur vers la fonction à exécuter sur chaque élément.
 *
 * Description: Parcourt le tableau et appelle la fonction pointée par
 * action pour chaque élément du tableau.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
