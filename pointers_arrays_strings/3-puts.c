#include <stdio.h>  /* Inclure directement pour printf si nécessaire */

/**
 * _puts - Affiche une chaîne suivie d'une nouvelle ligne
 * @str: La chaîne de caractères à afficher
 */
void _puts(char *str)
{
    while (*str != '\0')  /* Tant qu'on n'atteint pas la fin de la chaîne */
    {
        putchar(*str);   /* Affiche le caractère courant */
        str++;            /* Passe au caractère suivant */
    }
    putchar('\n');        /* Affiche une nouvelle ligne à la fin */
}
