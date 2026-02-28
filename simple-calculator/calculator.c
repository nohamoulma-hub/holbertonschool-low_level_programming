#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	int choicecalcul;

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
	return (0);
}
