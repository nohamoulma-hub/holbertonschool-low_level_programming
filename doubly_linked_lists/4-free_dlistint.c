#include "lists.h"
/**
 * free_dlistint - libère une liste de type dlistint_t
 * @head: pointeur vers le début de la liste
 *
 * Description : parcourt la liste et libère chaque nœud un par un
 * pour éviter les fuites de mémoire.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;	/**Sauvegarde l'adresse du prochain noeud avant de free*/
		free(head);
		head = next;
	}
}
