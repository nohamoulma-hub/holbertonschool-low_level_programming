#include <stdio.h>
#include <stdlib.h>
/**
 * main - affiche la lettre a jusqu'à la lettre z en minuscule et Majuscule
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
int main(void)
{
	char lettre;
	char lettreM;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre);
	}

	for (lettreM = 'A'; lettreM <= 'Z'; lettreM++)
	{
		putchar(lettreM);
	}
		putchar('\n');

		return (0);
}
