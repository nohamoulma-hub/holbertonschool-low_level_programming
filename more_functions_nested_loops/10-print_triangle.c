#include "main.h"
/**
 * print_triangle - imprime un triangle de taille déterminée.
 * @size: la taille de la base et de la hauteur du triangle.
 *
 * Description: Utilise des espaces pour l'alignement et # pour le triangle.
 * Si size est <= 0, imprime seulement un saut de ligne.
 */
void print_triangle(int size)
{
	int ligne, diese, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ligne = 1; ligne <= size; ligne++)
		{
			for (space = 1; space <= size - ligne; space++)
			{
				_putchar(' ');
			}
			for (diese = 1; diese <= ligne; diese++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
