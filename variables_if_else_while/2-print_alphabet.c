#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - affiche la lettre a jusqu'à la lettre z
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
int main(void)
{
	char lettre;

	for (lettre = 'a' ; lettre <= 'z'; lettre++)
	{
		putchar(lettre);
	}
		putchar('\n');
	return (0);
}
