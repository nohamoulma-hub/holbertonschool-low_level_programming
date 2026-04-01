#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * insert_dnodeint_at_index - Insère un nouveau nœud à une position donnée.
 * @h: Double pointeur vers la tête de la liste doublement chaînée.
 * @idx: Index où le nouveau nœud doit être ajouté (commence à 0).
 * @n: Valeur entière à stocker dans le nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud, ou NULL en cas d'échec.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *cp_h = *h;
	unsigned int compteur = 0;

	if (*h == NULL)
		return (NULL);
	while (cp_h->next != NULL && compteur < idx)
	{
		cp_h = cp_h->next;
		compteur++;
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (compteur < idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = cp_h->prev;
	new_node->next = cp_h;
	if (cp_h->next != NULL)
		cp_h->next->prev = new_node;
	cp_h->next = new_node;
	return (new_node);
}
