#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be modified.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	char *sep = " \t\n,;.!?\"(){}";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		if ((i == 0) && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - ('a' - 'A');
		}

		j = 0;

		while (sep[j] != '\0')
		{
			if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
			{
			s[i] = s[i] - ('a' - 'A');
			}
			j++;
		}
		i++;
	}
	return (s);
}
