#include <unistd.h>

/**
 * _putchar - écrit un caractère sur la sortie standard
 * @c: Le caractère à afficher
 *
 * Retour: Le nombre de caractères affichés (1), ou -1 en cas d'erreur.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
