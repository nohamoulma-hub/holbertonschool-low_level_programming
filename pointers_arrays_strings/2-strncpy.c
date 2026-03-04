#include "main.h"
/**
 * _strncpy - copie une chaîne de caractères
 * @dest: le tampon de destination
 * @src: la chaîne source
 * @n: le nombre d'octets à copier
 *
 * Return: le pointeur vers dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
