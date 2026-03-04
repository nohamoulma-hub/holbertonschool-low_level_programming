#include "main.h"
/**
 * string_toupper - change toutes les minuscules en majuscules
 * @s: la chaîne à modifier
 *
 * Return: le pointeur vers la chaîne modifiée
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}
	return (s);
}
