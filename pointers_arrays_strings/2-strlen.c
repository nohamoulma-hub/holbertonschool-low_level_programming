#include "main.h"
/**
 * _strlen - renvoie la longueur d'une chaîne de caractères
 * @s: la chaîne à mesurer
 * longu - renvoie le nombre de charactère jusqu'au dernier (\0)
 *
 * Return: la longueur de la chaîne (entier)
 */
int _strlen(char *s)
{
	int longu = 0;

	while (s[longu] != '\0')
	{
		longu++;
	}
	return (longu);
}
