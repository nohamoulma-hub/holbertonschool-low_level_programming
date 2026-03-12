#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - recherche un entier dans un tableau via une
 * fonction de comparaison.
 * @array: le tableau d'entiers à parcourir.
 * @size: le nombre d'éléments dans le tableau.
 * @cmp: pointeur vers la fonction utilisée pour comparer les valeurs.
 *
 * Description: Parcourt le tableau et applique la fonction cmp
 * à chaque élément.
 * Return: l'index du premier élément pour lequel cmp ne renvoie pas 0.
 * Si aucun élément ne correspond ou si size <= 0, renvoie -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
