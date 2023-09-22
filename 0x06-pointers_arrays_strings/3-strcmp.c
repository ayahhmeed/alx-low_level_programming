#include "main.h"

/**
 * _strncpy - Copy up to n characters of the string src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
size_t i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
