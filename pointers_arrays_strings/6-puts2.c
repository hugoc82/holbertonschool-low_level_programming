#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be processed
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0') /* Tant qu'on n'atteint pas la fin de la chaîne */
    {
        if (i % 2 == 0) /* Si l'indice est pair */
        {
            _putchar(str[i]); /* Afficher le caractère */
        }
        i++;
    }
    _putchar('\n'); /* Afficher un saut de ligne */
}
