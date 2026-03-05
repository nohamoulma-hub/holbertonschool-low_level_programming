#include "main.h"
/**
 * _atoi - convertit une chaîne de caractères en entier
 * @s: la chaîne à convertir
 *
 * Description: La fonction prend en compte tous les signes '-' et '+'
 * précédant le nombre. Elle arrête la conversion dès qu'un caractère
 * non numérique est rencontré après le début d'un nombre.
 * Si aucun nombre n'est trouvé, elle retourne 0.
 *
 * Return: l'entier converti à partir de la chaîne.
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
		resultat = resultat * 10 + (s[i] - '0');
		i++;
	}
	return (resultat * signe);
}
