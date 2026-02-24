#include "main.h"
/**
 * _isalpha - ckeck if the characters is an alphabetic character
 *
 *@c: c'est l'outil de mesure,il va controler chaque
 * caractère pour savoir si il est minuscule ou Maj
 *
 * Return:1 if lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
