#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to the result, or 0 if result cannot be stored in buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2), i, j, sum, carry = 0;

	if (len1 >= size_r || len2 >= size_r)
		return (NULL);
	n1 += len1 - 1;
	n2 += len2 - 1;
	for (i = 0, j = 0; i < len1 || j < len2 || carry; i++, j++)
	{
		sum = carry;
		if (i < len1)
			sum += *n1-- - '0';
		if (j < len2)
			sum += *n2-- - '0';
		carry = sum / 10;
		r[i] = sum % 10 + '0';
	}
	if (i == size_r)
		return (NULL);
	r[i--] = '\0';
	while (j <= i)
	{
		char c = r[j];

		r[j++] = r[i];
		r[i--] = c;
	}
	return (r);
}

