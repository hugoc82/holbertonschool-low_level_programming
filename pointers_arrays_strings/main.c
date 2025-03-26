#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);  // Affiche la chaîne avant inversion
    rev_string(s);      // Inverse la chaîne
    printf("%s\n", s);  // Affiche la chaîne après inversion
    return (0);
}
