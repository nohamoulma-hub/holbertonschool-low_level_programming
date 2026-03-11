#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - affiche les informations d'une struct dog.
 * @d: pointeur vers la structure dog à afficher.
 *
 * Description: Si un élément de d est NULL, affiche (nil) à la place.
 * Si d est NULL, la fonction ne fait rien.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
