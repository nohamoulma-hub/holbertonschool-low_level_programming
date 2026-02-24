#include "main.h"
/**
 * _islower - c'est le controleur
 *
 * 'c' - c'est l'outil de mesure,il va controler chaque
 * caractère pour savoir si il est minuscule ou non
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
