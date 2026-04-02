#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - Imprime une table de hachage.
 * @ht: La table de hachage à imprimer.
 *
 * Description: Imprime les paires clé/valeur dans l'ordre où elles
 * apparaissent dans le tableau de la table de hachage.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int i = 0;
	int first = 1;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];
		while (new_node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s' : '%s'", new_node->key, new_node->value);
			first = 0;
			new_node = new_node->next;
		}
	}
	printf("}\n");
}
