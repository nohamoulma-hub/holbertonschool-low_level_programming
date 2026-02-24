#include <stdio.h>
#include <stdlib.h>
/**
 * main - affiche l'alphabet sauf la lettre e et q
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'e' && lettre != 'q')
		{
			putchar(lettre);
		}
	}
		putchar('\n');
	return (0);
}
