#include <stdio.h>
#include <stdlib.h>
/**
 * main - affiche l'alphabet inverser
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
int main(void)
{
	char lettre;

	for (lettre = 'z'; lettre >= 'a'; lettre--)
	{
		putchar(lettre);
	}
		putchar('\n');
		return (0);
}
