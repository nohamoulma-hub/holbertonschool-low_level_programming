#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	int choicecalcul, nb1 = 0, nb2 = 0, resultat = 0;

		printf("Welcome to simple calculator !\n1) Add\n2) Subtract\n");
		printf("3) Multiply\n4) Divide\n0) Quit\n");
		scanf("%d", &choicecalcul);
	if (choicecalcul < 0 || choicecalcul > 4)
		printf("Invalid choice\n");
	else if (choicecalcul == 0)
		printf("Bye !\n");
	else if (choicecalcul == 1)
	{
		printf("Entrez votre addition : \n");
		scanf("%d + %d", &nb1, &nb2);
		printf("%d + %d = %d\n", nb1, nb2, resultat = nb1 + nb2);
	}
	else if (choicecalcul == 2)
	{
		printf("Entrez votre soustraction : \n");
		scanf("%d - %d", &nb1, &nb2);
		printf("%d - %d = %d\n", nb1, nb2, resultat = nb1 - nb2);
	}
	else if (choicecalcul == 3)
	{
		printf("Entrez votre multiplication : \n");
		scanf("%d * %d", &nb1, &nb2);
		printf("%d * %d = %d\n", nb1, nb2, resultat = nb1 * nb2);
	}
	else if (choicecalcul == 4)
	{
		printf("Entrez votre division : \n");
		scanf("%d / %d", &nb1, &nb2);
		if (nb2 != 0)
		printf("%d / %d = %d\n", nb1, nb2, resultat = nb1 / nb2);
	}
	return (0);
}
