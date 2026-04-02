#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_delete - Supprime une table de hachage.
 * @ht: La table de hachage à supprimer.
 *
 * Description: Libère toute la mémoire allouée pour la table de hachage,
 * incluant les clés, les valeurs, les nœuds et le tableau lui-même.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new_node;
	hash_node_t *tmp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];
		while (new_node != NULL)
		{
			tmp = new_node->next;
			free(new_node->value);
			free(new_node->key);
			free(new_node);
			new_node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
