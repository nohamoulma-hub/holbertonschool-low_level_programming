#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 *
 * Return: a pointer to the modified string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char lettre[] = "aAeEoOtTlL";
	char trad[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (lettre[j] != '\0')
		{
			if (s[i] == lettre[j])
			{
				s[i] = trad[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
