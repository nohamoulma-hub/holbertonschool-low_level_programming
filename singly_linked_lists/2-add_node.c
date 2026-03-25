#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Ajoute un nouveau nœud au début d'une liste list_t.
 * @head: Double pointeur vers la tête de la liste.
 * @str: Chaîne de caractères à dupliquer dans le nouveau nœud.
 *
 * Return: L'adresse du nouvel élément, ou NULL en cas d'échec.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
