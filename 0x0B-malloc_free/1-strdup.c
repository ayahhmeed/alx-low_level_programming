#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
    if (str == NULL)
        return NULL;

    int len = 0;

    while (str[len] != '\0')
        len++;

    char *new_str = malloc((len + 1) * sizeof(char));

    if (new_str == NULL)
        return NULL;

    for (int i = 0; i <= len; i++)
        new_str[i] = str[i];

    return new_str;
}
