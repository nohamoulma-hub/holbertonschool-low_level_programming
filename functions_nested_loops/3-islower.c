#include "main.h"
/**
 * _islower - c'est le controleur
 *
 * 'c' - c'est l'outil de mesure,il va controler chaque
 * caractère pour savoir si il est minuscule ou non
 *
 * Return:1 if lowercase, 0 otherwise
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
