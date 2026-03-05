#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: the longer string to be searched
 * @needle: the first occurrence of the substring to find
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
		{
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] != '\0')
				{
					return (&haystack[i]);
				}
			}
			i++;
		}
	return (NULL);
}
