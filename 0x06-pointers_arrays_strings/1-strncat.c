#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */

/**
 * _strncat - concatenates two strings
 *
 * @dest: First part of the resulting string
 * @src: Second part of the resulting string
 * @n: Maximum number of bytes to be used from @src
 *
 * Return: Pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i = 0;

    // Find the length of the destination string
    while (dest[dest_len] != '\0')
        dest_len++;

    // Append at most n characters from the source string to the destination string
    while (n-- && src[i] != '\0')
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }
