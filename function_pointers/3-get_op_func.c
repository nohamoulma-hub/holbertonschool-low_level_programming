#include "3-calc.h"
#include <stddef.h>
#include <string.h>
/**
 * get_op_func - sélectionne la fonction correcte pour l'opération demandée.
 * @s: l'opérateur passé en argument (sous forme de chaîne).
 *
 * Return: un pointeur vers la fonction correspondant à l'opérateur,
 * ou NULL si l'opérateur ne correspond pas.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	i++;
	}
	return (NULL);
}
