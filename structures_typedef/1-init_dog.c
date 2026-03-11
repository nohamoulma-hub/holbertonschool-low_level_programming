#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialise une variable de type struct dog.
 * @d: pointeur vers la structure dog à initialiser.
 * @name: nom à assigner au chien.
 * @age: âge à assigner au chien.
 * @owner: nom du propriétaire à assigner au chien.
 *
 * Description: Cette fonction remplit les champs de la structure pointée
 * par d avec les valeurs fournies en paramètres.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
