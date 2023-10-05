#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *arr = malloc(size * sizeof(char));

    if (arr == NULL)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
    {
        arr[i] = c;
    }

    return arr;
}
