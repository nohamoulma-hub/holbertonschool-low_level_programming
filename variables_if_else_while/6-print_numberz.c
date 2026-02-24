#include <stdio.h>
#include <stdlib.h>
/**
 * main - affiche les chiffres en base 10 sans utiliser la variable char
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
int main(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		putchar(nb);
	}
	putchar('\n');
	return (0);
}
