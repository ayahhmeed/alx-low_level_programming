#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to check
 * @accept: pointer to the string of characters to accept
 * Return: number of bytes in the initial segment of s consisting of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
