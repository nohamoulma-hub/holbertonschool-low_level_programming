#include "main.h"
/**
 * _strcmp - compare deux chaînes
 * @s1: première chaîne
 * @s2: seconde chaîne
 *
 * Return: la différence ASCII entre les deux premiers caractères différents
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
