#include "main.h"
/**
 * puts_half - imprime la seconde moitié d'une chaîne
 * @str: la chaîne de caractères à traiter
 *
 * Description: Si le nombre de caractères est impair, la fonction
 * affiche les n derniers caractères avec n = (longueur + 1) / 2.
 */
void puts_half(char *str)
{
	int longueur = 0;
	int i;
	int n;

	while (str[longueur] != '\0')
	{
		longueur++;
	}
	n = (longueur + 1) / 2;

	for (i = (longueur - n) ; i < longueur ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
