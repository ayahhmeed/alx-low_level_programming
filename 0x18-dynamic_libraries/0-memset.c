#include "main.h"

/**
 * _memset - fills the first n bytes of s with constant c
 * @s: pointer to the memory area to be filled
 * @c: the constant to fill the memory with
 * @n: the number of bytes to fill
 * Return: a pointer to the filled memory area s
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}
	return (s);
}
