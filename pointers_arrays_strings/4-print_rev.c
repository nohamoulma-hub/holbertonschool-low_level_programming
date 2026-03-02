#include "main.h"
/**
 * print_rev - imprime une chaîne à l'envers, suivie d'une nouvelle ligne
 * @s: la chaîne de caractères à imprimer
 *
 * Description: calcule d'abord la longueur de la chaîne, puis parcourt
 * la chaîne en partant de la fin vers le début en utilisant _putchar.
 */
void print_rev(char *s)
{
	int longu = 0;
	int reverse;

	while (s[longu] != '\0')
	{
		longu++;
	}
	reverse = longu - 1;
	while (reverse >= 0)
	{
		_putchar(s[reverse]);
		reverse--;
	}
	_putchar('\n');
}
