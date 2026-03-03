#include "main.h"
/**
 * puts2 - imprime un caractère sur deux d'une chaîne.
 * @str: la chaîne de caractères à traiter.
 *
 * Description: Commence par le premier caractère, puis affiche
 * chaque caractère suivant avec un pas de 2 jusqu'à la fin.
 */
void puts2(char *str)
{
	int longueur = 0;

	while (str[longueur] != '\0')
	{
		_putchar(str[longueur]);
		longueur++;
		longueur++;
	}
	_putchar('\n');
}
