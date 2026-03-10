#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - alloue de la mémoire en utilisant malloc.
 * @b: le nombre d'octets à allouer.
 *
 * Description: Si malloc échoue (retourne NULL), la fonction provoque
 * l'arrêt immédiat du processus avec une valeur de statut égale à 98.
 * Return: un pointeur vers la mémoire allouée.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
