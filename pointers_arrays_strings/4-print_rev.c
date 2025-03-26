#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères en sens inverse, suivie d'une nouvelle ligne
 * @s: La chaîne de caractères à afficher en sens inverse
 */
void print_rev(char *s)
{
    int length = 0;

    /* Calculer la longueur de la chaîne */
    while (s[length] != '\0')
    {
        length++;
    }

    /* Afficher la chaîne en sens inverse */
    while (length > 0)
    {
        _putchar(s[length - 1]);
        length--;
    }

    _putchar('\n');  /* Ajouter une nouvelle ligne à la fin */
}
