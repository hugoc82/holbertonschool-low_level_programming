#include "main.h"  /* Inclure le fichier d'en-tête */

/**
 * main - Teste la fonction puts_half.
 * 
 * Return: Toujours 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";  /* Chaîne de test */
    puts_half(str);      /* Appel de la fonction puts_half */
    return (0);
}
