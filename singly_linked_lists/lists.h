#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct list_s - Liste chaînée de chaînes de caractères
 * @str: Chaîne de caractères (allouée dynamiquement)
 * @len: Longueur de la chaîne de caractères
 * @next: Pointeur vers le nœud suivant
 *
 * Description: Structure de nœud pour une liste chaînée simple
 * permettant de stocker une chaîne et sa taille pour un accès rapide.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
