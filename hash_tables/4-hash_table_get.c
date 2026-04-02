#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - Récupère une valeur associée à une clé.
 * @ht: La table de hachage dans laquelle chercher.
 * @key: La clé que l'on recherche.
 *
 * Return: La valeur associée à l'élément,
 * ou NULL si la clé n'a pas pu être trouvée.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int idx = 0; /** pour calculee l'index de la clé  */

	if (!ht || !key)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	/** On chercher le numéro de case dans le tableau */
	new_node = ht->array[idx];

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0) /** Compare si les clé correspondent */
			return (new_node->value); /** Si oui, on retourne sa valeur */
		new_node = new_node->next;
	}
	return (NULL);
}
