#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - libère une grille de deux dimensions précédemment
 * créée par alloc_grid.
 * @grid: pointeur vers la grille (tableau de pointeurs d'entiers).
 * @height: hauteur de la grille.
 *
 * Description: Cette fonction libère d'abord chaque ligne de la grille,
 * puis libère le pointeur principal de la grille elle-même.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
