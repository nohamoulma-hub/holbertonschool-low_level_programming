#include "main.h"
/**
 * _memcpy - copie une zone mémoire.
 * @dest: la zone mémoire de destination.
 * @src: la zone mémoire source à copier.
 * @n: le nombre d'octets à copier.
 *
 * Return: un pointeur vers la zone de destination (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
