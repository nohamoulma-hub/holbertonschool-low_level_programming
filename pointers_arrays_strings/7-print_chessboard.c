#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an array of 8 characters (the board)
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int ligne = 0;
	int colonne = 0;

	while (ligne < 8)
	{
		colonne = 0;
		while (colonne < 8)
		{
			_putchar (a[ligne][colonne]);
			colonne++;
		}
		_putchar ('\n');
		ligne++;
	}
}
