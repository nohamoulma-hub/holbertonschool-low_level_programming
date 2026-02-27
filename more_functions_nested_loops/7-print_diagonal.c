#include "main.h"
/**
 * print_diagonal - dessine une ligne diagonale dans le terminal.
 * @n: le nombre de fois que le caractère \ doit être imprimé.
 *
 * Description: Chaque \ est précédé d'un nombre croissant d'espaces.
 * Si n est <= 0, imprime seulement un saut de ligne.
 */
void print_diagonal(int n)

{

	int ligne, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ligne = 0; ligne < n; ligne++)
		{
			space = 0;
			while (space < ligne)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
