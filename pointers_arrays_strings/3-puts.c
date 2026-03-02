#include "main.h"
/**
 * _puts - imprime une chaîne de caractères suivie d'une nouvelle ligne
 * @str: la chaîne de caractères à afficher
 *
 * Description: parcourt la chaîne jusqu'au caractère nul et affiche
 * chaque caractère un par un sur la sortie standard (stdout).
 */
void _puts(char *str)
{
		int longu = 0;

	while (str[longu] != '\0')
	{
		_putchar(str[longu]);
		longu++;
	}
	_putchar('\n');
}
