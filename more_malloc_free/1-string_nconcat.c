#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatène deux chaînes avec un nombre
 * limité d'octets de s2.
 * @s1: la première chaîne.
 * @s2: la deuxième chaîne dont on prend n octets.
 * @n: le nombre maximal d'octets de s2 à copier.
 *
 * Description: La chaîne résultante contient s1 suivie des n premiers
 * octets de s2, terminée par un caractère nul. Si n est supérieur ou égal
 * à la longueur de s2, alors toute la chaîne s2 est utilisée.
 * Return: un pointeur vers l'espace alloué, ou NULL si échec.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tab;
	unsigned int longs1 = 0;
	unsigned int longs2 = 0;
	unsigned int size;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[longs1] != '\0')
		longs1++;
	while (s2[longs2] != '\0')
		longs2++;
	size = longs1 + longs2;
	tab = malloc((size + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		tab[i] = s1[i];
	}
	if (n >= longs2)
	{
		for (n = 0; s2[n] != '\0'; n++)
			tab[longs1 + n] = s2[n];
	}
	else
	{
		for (j = 0; j < n; j++)
		tab[longs1 + j] = s2[j];
	}
	tab[longs1 + longs2] = '\0';
	return (tab);
}
