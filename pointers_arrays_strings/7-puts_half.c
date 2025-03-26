#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to print
 */
void puts_half(char *str)
{
    int length = 0;
    int i;

    /* Trouver la longueur de la chaîne */
    while (str[length] != '\0')
    {
        length++;
    }

    /* Si la longueur est impair, commencez à partir du caractère au milieu */
    if (length % 2 == 1)
    {
        i = (length + 1) / 2;
    }
    else
    {
        i = length / 2;
    }

    /* Afficher la seconde moitié de la chaîne */
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n');
}

