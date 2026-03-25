#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * list_len - Renvoie le nombre d'éléments d'une liste list_t.
 * @h: Pointeur vers le début de la liste.
 *
 * Return: Le nombre de nœuds.
 */
size_t list_len(const list_t *h)
{
	int compteur = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			return (compteur);
		compteur++;
		h = h->next;
	}
	return (compteur);
}
