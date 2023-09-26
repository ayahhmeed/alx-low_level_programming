#include "main.h"
#include "main.h"

/**
 * _strchr - finds the first occurrence of a character in a string
 * @s: pointer to the string to search
 * @c: the character to search for
 * Return: pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return (s);
	return (NULL);
}
