#include <stdio.h>
#include <stdlib.h>
/**
 * main - affiche la base 10 avec une virgule suivi
 * d'un espace entre chaque chiffre
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
int main(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		putchar(nb);
		if (nb < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
