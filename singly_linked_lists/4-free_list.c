#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_list - Libère une liste de type list_t.
 * @head: Pointeur vers le début de la liste.
 *
 * Description: Libère chaque nœud de la liste ainsi que
 * la chaîne de caractères (str) contenue dans chaque nœud.
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next; /** Passe au noeud d'après **/
	}
}
