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

    int len = strlen(str);

    char *new_str = malloc((len + 1) * sizeof(char));

    if (new_str == NULL)
        return NULL;

    strcpy(new_str, str);

    return new_str;
}
