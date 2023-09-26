#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the string to be set
 * @to: pointer to the string to set it to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
    *s = to;
}
