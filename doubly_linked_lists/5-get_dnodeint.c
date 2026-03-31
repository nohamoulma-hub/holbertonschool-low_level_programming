#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Renvoie le n-ième nœud d'une liste dlistint_t.
 * @head: Pointeur vers la tête de la liste doublement chaînée.
 * @index: Indice du nœud à retourner, commençant à 0.
 *
 * Return: L'adresse du nœud à l'index spécifié,
 * ou NULL si le nœud n'existe pas.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int compteur = 0;

	while (head != NULL)
	{
		if (compteur == index)
		{
			return (head);
		}
		head = head->next;
		compteur++;
	}
	return (NULL);
}
