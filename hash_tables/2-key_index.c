#include "hash_tables.h"
#include <stdlib.h>
/**
 * key_index - Donne l'index d'une clé dans le tableau de la table de hachage.
 * @key: La clé (chaîne de caractères) à hacher.
 * @size: La taille du tableau de la table de hachage.
 *
 * Return: L'index auquel la paire clé/valeur doit être stockée.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
