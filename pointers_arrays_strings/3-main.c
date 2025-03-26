#include <stdio.h> /* Inclure pour printf et putchar si nécessaire */

/* Déclaration de la fonction _puts */
void _puts(char *str);

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);  /* Utilise _puts sans besoin de main.h */
    return (0);
}
