#include "main.h"
/**
 * more_numbers - Affiche 10 fois les nombres de 0 à 14,
 * suivis d'une nouvelle ligne.
 *
 * Description: Utilise _putchar seulement trois fois.
 */
void more_numbers(void)
{
	int col;
	int lign;

	for (col = 0; col <= 10; col++)
	{
		for (lign = 0; lign <= 14; lign++)
		{
			if (lign > 9)
			{
				_putchar((lign / 10) + '0');
			}
				_putchar((lign % 10) + '0');
		}
		_putchar('\n');
	}
}
