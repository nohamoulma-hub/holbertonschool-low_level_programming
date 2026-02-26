#include "main.h"
/**
 * print_line - Dessine une ligne droite dans le terminal.
 * @n: Le nombre de fois que le caractère '_' doit être imprimé.
 *
 * Description: Si n est <= 0, affiche uniquement un saut de ligne.
 */
void print_line(int n)

{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n ; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
