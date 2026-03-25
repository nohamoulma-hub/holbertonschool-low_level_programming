#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste list_t.
 * @head: Double pointeur vers la tête de la liste.
 * @str: Chaîne de caractères à dupliquer.
 *
 * Return: L'adresse du nouvel élément, ou NULL en cas d'échec.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i = 0;
	list_t *cp_head = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	new_node->len = i;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (cp_head->next != NULL)
	{
		cp_head = cp_head->next;
	}
	cp_head->next = new_node;
	new_node->next = NULL;
	return (new_node);
}
