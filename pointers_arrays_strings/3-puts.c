#include "main.h"

/**
 * _puts - Affiche une chaîne suivie d'une nouvelle ligne
 * @str: La chaîne de caractères à afficher
 */
void _puts(char *str)
{
    while (*str != '\0')  // Tant qu'on n'atteint pas la fin de la chaîne
    {
        _putchar(*str);   // Affiche le caractère actuel
        str++;            // Passe au caractère suivant
    }
    _putchar('\n');        // Affiche une nouvelle ligne à la fin
}
