#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: First part of the resulting string
 * @src: Second part of the resulting string
 * @n: Maximum number of bytes to be used from @src
 *
 * Return: Pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++);
	dest[c + i] = src [i];
	dest[c + i} = '\0';

	return (dest);
}
