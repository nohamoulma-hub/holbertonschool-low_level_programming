#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table to modify
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key (must be duplicated)
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp_node; /** noeud créé pour vérifier si la clé existe */
	hash_node_t *new_node;
	unsigned long int idx = 0;

	if (!value || !key || !ht)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);

	tmp_node = ht->array[idx]; /** on donne la valeur à la copie */
	while (tmp_node != NULL)
	{
		if (strcmp(tmp_node->key, key) == 0) /** clé trouvée */
		{
			free(tmp_node->value); /** on free l'ancienne valeure */
			tmp_node->value = strdup(value); /** on réatribue la nouvelle valeure */
			return (tmp_node->value != NULL);
		}
		tmp_node = tmp_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
	new_node->key = strdup(key); /** on duplique la clé dans le nouveau noeud */
	new_node->value = strdup(value); /** pareil mais avec la valeur */
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->value);
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
