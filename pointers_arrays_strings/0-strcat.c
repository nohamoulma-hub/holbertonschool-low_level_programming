#include "main.h"
/**
 * _strcat - concatène deux chaînes de caractères
 * @dest: chaîne de destination
 * @src: chaîne source
 *
 * Return: un pointeur vers la chaîne de destination dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int cp = 0;

	while (dest[i] != '\0')
		i++;

	for (cp = 0; src[cp] != '\0'; cp++)
	{
	dest[i] = src[cp];
	i++;
	}
	dest[i] = '\0';

	return (dest);

}
