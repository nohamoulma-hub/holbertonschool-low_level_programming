#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the string containing the list of characters to match
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = 0;
		while (accept[n] != '\0' && s[i] != accept[n])
			n++;
	}
	if (accept[n] == '\0')
	n++;
	return (n);
}
