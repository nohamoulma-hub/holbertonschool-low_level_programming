#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
	int choicecalcul, nb1 = 0, nb2 = 0, resultat = 0;

		printf("Welcome to simple calculator !\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		scanf("%d", &choicecalcul);

	if (choicecalcul < 0 || choicecalcul > 4)
	{
		printf("Invalid choice\n");
	}
	if (choicecalcul == 0)
	{
		printf("Bye !\n");
	}
	if (choicecalcul == 1)
	{
		printf("Entrez votre premier nombre : \n");
		scanf("%d", &nb1);
		printf("Entrez votre deuxième nombre : \n");
		scanf("%d", &nb2);
		resultat = nb1 + nb2;
		printf("%d + %d = %d\n", nb1, nb2, resultat);
	}
	return (0);
}
