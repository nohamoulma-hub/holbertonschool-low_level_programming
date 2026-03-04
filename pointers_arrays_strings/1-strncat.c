#include "main.h"
/**
 * _strncat - concatène deux chaînes avec au plus n octets de src
 * @dest: chaîne de destination
 * @src: chaîne source
 * @n: nombre maximum d'octets à copier
 *
 * Return: un pointeur vers dest
 */
char *_strncat(char *dest, char *src, int n)

{
	int i = 0;
	int cp = 0;

	while (dest[i] != '\0')
		i++;

	for (cp = 0; cp < n && src[cp] != '\0' ; cp++)
	{
	dest[i] = src[cp];
	i++;
	}
	dest[i] = '\0';

	return (dest);
}
