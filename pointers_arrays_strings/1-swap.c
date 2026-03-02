#include "main.h"
/**
 * swap_int - échange les valeurs de deux entiers
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le second entier
 * @c: variable vide permettant de transvaser
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
