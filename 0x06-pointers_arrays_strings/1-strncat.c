#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenation  strings, define the sizof second string
 * @dest: string with concatenation
 * @src: string to be concatenation 
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthD, lengthS;

	lengthD = 0;
	lengthS = 0;

	while (*(dest + lengthD) != '\0')
		lengthD++
			
	while (*(src + lengthS) != '\0' && lengthD < 97 && lengthS < n)
	{
		*(dest+lerngthD) = *(src + lengthS);
		lengthD++
		lengthS++
	}
	*(dest + lengthD) = '\0';
	return (dest);
}

