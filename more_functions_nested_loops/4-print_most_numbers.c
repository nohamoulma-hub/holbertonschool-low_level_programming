#include "main.h"
/**
 * print_most_numbers - Affiche les chiffres de 0 à 9, sauf 2 et 4,
 * suivis d'une nouvelle ligne.
 *
 * Description: Utilise _putchar seulement deux fois.
 */
void print_most_numbers(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		if (nb != '2' && nb != '4')
		{
			_putchar(nb);
		}
	}
	_putchar('\n');
}
