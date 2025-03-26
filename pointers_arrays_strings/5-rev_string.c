#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
    int length = 0;
    int i;
    char temp;

    // Find the length of the string
    while (s[length] != '\0')
    {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length / 2; i++)
    {
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}
