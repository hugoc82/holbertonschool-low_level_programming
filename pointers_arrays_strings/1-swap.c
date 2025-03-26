#include "main.h"

/**
 * swap_int - échange les valeurs de deux entiers
 * @a: premier entier
 * @b: deuxième entier
 */
void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
