#include "main.h"
/**
 * _strcpy - copie la chaîne pointée par src dans le tampon dest
 * @dest: le pointeur vers la destination
 * @src: la chaîne source à copier
 *
 * Description: parcourt src caractère par caractère et les écrit dans dest,
 * incluant le caractère nul (\0) à la fin.
 * Return: le pointeur vers dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
