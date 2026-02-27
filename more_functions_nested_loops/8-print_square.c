#include "main.h"
/**
 * print_square - imprime un carré suivi d'une nouvelle ligne.
 * @size: la taille du côté du carré.
 *
 * Description: Utilise le caractère # pour dessiner le carré.
 * Si size est <= 0, imprime seulement un saut de ligne.
 */
void print_square(int size)

{

	int ligne, diese;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ligne = 0; ligne < size; ligne++)
		{
			for (diese = 0; diese < size; diese++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
