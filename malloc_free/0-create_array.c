#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - crée un tableau de caractères et l'initialise
 * avec un caractère spécifique.
 * @size: la taille du tableau à créer
 * @c: le caractère d'initialisation
 *
 * Return: un pointeur vers le tableau, ou NULL si size est 0
 * ou si l'allocation échoue.
 */
char *create_array(unsigned int size, char c)

{
	unsigned int i = 0;
	char *tab;

	if (size == 0)
	{
		return (NULL);
	}
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		tab[i] = c;
		i++;
	}
	return (tab);
}
