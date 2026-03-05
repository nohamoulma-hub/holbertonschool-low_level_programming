#include "main.h"
/**
 * rev_string - inverse une chaîne de caractères.
 * @s: le pointeur vers la chaîne de caractères à modifier.
 *
 * Description: Calcule d'abord la longueur de la chaîne, puis échange
 * les caractères du début et de la fin en progressant vers le milieu.
 */
void rev_string(char *s)
{
	int i = 0;
	int longueur = 0;
	char c;

	while (s[longueur] != '\0')
	{
		longueur++;
	}
	longueur--;
	while (i < longueur)
	{
		c = s[i];
		s[i] = s[longueur];
		s[longueur] = c;
		i++;
		longueur--;
	}
}
/*
#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères
 * @s: la chaîne à modifier
 *
 * Description: Calcule la longueur, puis échange les caractères
 * du début avec ceux de la fin en progressant vers le milieu.
 
void rev_string(char *s)
{
	int i;
	int len = 0;
	char temp;

	/* 1. On calcule la longueur de la chaîne 
	while (s[len] != '\0')
	{
		len++;
	}

	/* 2. On boucle jusqu'à la moitié de la chaîne
	for (i = 0; i < len / 2; i++)
	{
		/* Le fameux échange avec le troisième verre (temp) 
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
*/