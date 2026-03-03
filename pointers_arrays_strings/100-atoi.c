#include "main.h"
/**
 * 
 */
int _atoi(char *s)
{
	int i = 0;
	int signe = 1;
	unsigned int resultat = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			signe *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		resultat = resultat * 10 + (s[i] - '\0');
		i++;
	}
	return (resultat * signe);
}
