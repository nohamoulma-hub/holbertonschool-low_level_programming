#include "main.h"
/**
 * print_numbers - Affiche les chiffres de 0 à 9,
 * suivis d'une nouvelle ligne.
 *
 * Description: Utilise _putchar seulement deux fois.
 */
void print_numbers(void)
{
	int numero;

	for (numero = 0; numero <= 9; numero++)
	{
		_putchar(numero + '0');
	}
	_putchar('\n');
}
