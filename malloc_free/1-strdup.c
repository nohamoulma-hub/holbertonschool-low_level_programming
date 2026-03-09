#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - duplique une chaîne de caractères en utilisant malloc.
 * @str: la chaîne de caractères à copier.
 *
 * Description: Alloue de la mémoire pour une nouvelle chaîne de caractères
 * qui est une copie conforme de str.
 * Return: un pointeur vers la nouvelle chaîne, ou NULL si str est NULL
 * ou si l'allocation mémoire échoue.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int size = 0;
	char *tab;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size])
	{
		size++;
	}
	tab = malloc((size + 1) * sizeof(char));
	if (tab == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
