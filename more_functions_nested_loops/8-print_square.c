#include "main.h"
/**
 * print_diagonal - dessine une ligne diagonale dans le terminal.
 * @n: le nombre de fois que le caractère \ doit être imprimé.
 *
 * Description: Chaque \ est précédé d'un nombre croissant d'espaces.
 * Si n est <= 0, imprime seulement un saut de ligne.
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
