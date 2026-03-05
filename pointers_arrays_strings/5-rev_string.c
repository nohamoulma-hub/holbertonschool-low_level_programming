#include "main.h"
/**
 * rev_string - inverse une chaîne de caractères.
 * @s: le pointeur vers la chaîne de caractères à modifier.
 *
 * Description: Calcule d'abord la longueur de la chaîne, puis échange
 * les caractères du début et de la fin en progressant vers le milieu.
 */
void rev_string(char *s)
{
	int i = 0;
	int longueur = 0;
	char c;

	while (s[longueur] != '\0')
	{
		longueur++;
	}
	longueur--;
	while (i < longueur)
	{
		c = s[i];
		s[i] = s[longueur];
		s[longueur] = c;
		i++;
		longueur--;
	}
}
