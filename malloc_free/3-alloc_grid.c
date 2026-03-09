#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - crée une grille de 2 dimensions d'entiers.
 * @width: largeur de la grille.
 * @height: hauteur de la grille.
 *
 * Return: pointeur vers la grille (succès), ou NULL (échec ou taille <= 0).
 */
int **alloc_grid(int width, int height)
{
	int **grille;
	int c = 0;
	int i = 0;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	grille = malloc(height * sizeof(int *));
	if (grille == 0)
	{
		return (NULL);
	}
	while (i < height)
	{
		grille[i] = malloc(width * sizeof(int));
		for (c = 0; c < width; c++)
		{
		grille[i][c] = 0;
		}
		i++;
	}
	return (grille);
}
