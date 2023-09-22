#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings, up to n bytes of src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
size_t dest_len = 0;
while (dest[dest_len])
dest_len++;

for (size_t i = 0; i < n && src[i]; i++)
dest[dest_len++] = src[i];

dest[dest_len] = '\0';
return (dest);
}

