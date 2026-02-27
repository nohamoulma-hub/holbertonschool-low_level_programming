#include "main.h"
#include "stdio.h"
/**
 * main - imprime les nombres de 1 à 100 avec Fizz, Buzz et FizzBuzz.
 *
 * Description: Multiples de 3 -> Fizz. Multiples de 5 -> Buzz.
 * Multiples de 3 et 5 -> FizzBuzz. Les élément sont séparés par un espace.
 * Return: Toujours 0 (Succès).
 */
int main(void)

{
	int nb;

	for (nb = 1; nb <= 100; nb++)
	{
		if (nb % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (nb % 5 == 0)
		{
			printf("Buzz");
		}
		else if (nb % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", nb);
		}
		if (nb < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
