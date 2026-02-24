#include <stdio.h>
#include <stdlib.h>
/**
 * main - affiche la base 16
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
int main(void)
{
	char nb;
	char lettre;

	for (nb = '0'; nb <= '9'; nb++)
	{
		putchar(nb);
	}
	for (lettre = 'a'; lettre <= 'f'; lettre++)
	{
		putchar(lettre);
	}
		putchar('\n');
		return (0);
}
