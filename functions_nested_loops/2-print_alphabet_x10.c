#include "main.h"
/**
 * print_alphabet_x10 - affiche l'alphabet 10x
 *
 * Return:0 Si rien ne s'affiche tout est parfait
 */
void print_alphabet_x10(void)
{
char lettre;
int compteur = 0;

while (compteur < 10)
{
for (lettre = 'a'; lettre <= 'z'; lettre++)
{
_putchar(lettre);
}
compteur++;
_putchar('\n');
}
}
