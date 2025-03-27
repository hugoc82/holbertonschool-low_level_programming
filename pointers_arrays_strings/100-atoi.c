#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, num = 0, found_digit = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + (s[i] - '0');
            found_digit = 1;
        }
        else if (found_digit)
            break; /* Arrêter après avoir trouvé un nombre */

        i++;
    }

    return (num * sign);
}
