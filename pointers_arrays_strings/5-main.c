#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    _puts(s);        /* Affiche la chaîne avant inversion */
    rev_string(s);   /* Inverse la chaîne */
    _puts(s);        /* Affiche la chaîne après inversion */
    return (0);
}

