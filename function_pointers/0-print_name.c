#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_name - imprime un nom en utilisant une fonction passée en paramètre.
 * @name: le nom à imprimer.
 * @f: pointeur vers la fonction à utiliser pour l'impression.
 *
 * Description: Cette fonction prend un nom et un pointeur de fonction,
 * puis exécute la fonction pointée avec le nom en argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
