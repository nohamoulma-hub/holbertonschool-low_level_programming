#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - Crée une table de hachage.
 * @size: La taille du tableau.
 *
 * Return: Un pointeur vers la nouvelle table de hachage,
 * ou NULL en cas d'erreur.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i = 0;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->array = malloc(sizeof(hash_node_t *) * size);
		if (new_ht->array == NULL)
			return (NULL);
	new_ht->size = size;
	while (i < size)
	{
		new_ht->array[i] = NULL;
		i++;
	}
	return (new_ht);
}
