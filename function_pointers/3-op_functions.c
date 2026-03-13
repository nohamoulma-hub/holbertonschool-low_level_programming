#include "3-calc.h"
/**
 * op_add - calcule la somme de deux entiers.
 * @a: le premier entier.
 * @b: le deuxième entier.
 *
 * Return: la somme de a et b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calcule la différence de deux entiers.
 * @a: le premier entier.
 * @b: le deuxième entier.
 *
 * Return: la différence de a et b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calcule le produit de deux entiers.
 * @a: le premier entier.
 * @b: le deuxième entier.
 *
 * Return: le produit de a et b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calcule le résultat de la division de deux entiers.
 * @a: le premier entier (numérateur).
 * @b: le deuxième entier (dénominateur).
 *
 * Return: le résultat de la division entière de a par b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calcule le reste de la division de deux entiers.
 * @a: le premier entier.
 * @b: le deuxième entier.
 *
 * Return: le reste de la division de a par b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
