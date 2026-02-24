#include "main.h"

/**
 * print_alphabet - créer la fonction print_alphabet pour le prototype
 * void print_alphabet(void);
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		_putchar(lettre);
	}
		_putchar('\n');
}
