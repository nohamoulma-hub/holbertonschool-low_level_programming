#include "dog.h"
#include <stddef.h>
/**
 * free_dog - libère la mémoire allouée pour un chien.
 * @d: pointeur vers la structure dog_t à libérer.
 *
 * Description: Cette fonction libère la mémoire du nom, du propriétaire,
 * puis de la structure elle-même.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	free(d->name);
	free(d->owner);
	free(d);
}
