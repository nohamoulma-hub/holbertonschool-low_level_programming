#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - concatène deux chaînes de caractères.
 * @s1: la première chaîne.
 * @s2: la deuxième chaîne.
 *
 * Description: Alloue de la mémoire pour une nouvelle chaîne qui contient
 * s1 suivi de s2, et se termine par un caractère nul.
 * Si NULL est passé, la chaîne est traitée comme une chaîne vide.
 * Return: un pointeur vers la nouvelle chaîne, ou NULL en cas d'échec.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int longs1 = 0;
	unsigned int longs2 = 0;
	unsigned int size;
	unsigned int i;
	unsigned int j;
	char *tab;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[longs1] != '\0')
	{
		longs1++;
	}
	while (s2[longs2] != '\0')
	{
		longs2++;
	}
	size = longs1 + longs2;
	tab = malloc((size + 1) * sizeof(char));
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		tab[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		tab[longs1 + j] = s2[j];
	}
	tab[longs1 + longs2] = '\0';
return (tab);
}
