#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * 
 * Return: integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;

    while (*s)
    {
        if (*s == '-')
        {
            sign = sign * -1;
        }

        if (*s >= '0' && *s <= '9')
        {
            num = num * 10 + (*s - '0');
            if (*(s + 1) < '0' || *(s + 1) > '9')
                break;
        }

        s++;
    }
    return (num * sign);
}
