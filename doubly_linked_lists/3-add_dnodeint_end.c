#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be included in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *cp_head = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	while (cp_head->next != NULL)
	{
		cp_head = cp_head->next;
	}
	cp_head->next = new_node;
	new_node->next = NULL;
	new_node->prev = cp_head;
	return (new_node);
}
