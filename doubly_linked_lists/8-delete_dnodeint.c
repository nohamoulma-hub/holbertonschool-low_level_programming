#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - supprime le nœud à l'index donné
 * @head: double pointeur vers le début de la liste
 * @index: index du nœud à supprimer (commence à 0)
 *
 * Return: 1 (succès), -1 (échec)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if ((*head)->next == 0)
	{
		node_tmp = (*head)->next;
		if (node_tmp != NULL)
			node_tmp->prev = NULL;
		free(node_tmp);
		return (1);
	}
	while (node_tmp != NULL && i < index)
	{
		node_tmp = node_tmp->next;
		i++;
	}
	if (node_tmp->prev != NULL)
		node_tmp->prev->next = node_tmp->next;
	if (node_tmp->next != NULL)
		node_tmp->next->prev = node_tmp->prev;
	free(node_tmp);
	return (1);
}
