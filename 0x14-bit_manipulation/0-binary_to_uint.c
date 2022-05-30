#include "main.h"

int _strlen(const char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int _strlen = 0;

    if (!b)
        return (0);

    for (i = 0; b[i]; i++)
    {
        if (b[i] < '0' || b[i] > '1')
            return (0);
        strlen = 2 * _strlen + (b[i] - '0');
    }

    return (_strlen);
}
	


