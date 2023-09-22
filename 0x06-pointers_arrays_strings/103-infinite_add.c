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
	int len1 = 0, len2 = 0, i = 0, j = 0, sum = 0, carry = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 >= size_r || len2 >= size_r)
		return (0);
	len1--;
	len2--;
	for (i = 0, j = 0; i <= len1 || j <= len2; i++, j++)
	{
		if (i <= len1)
			sum += n1[len1 - i] - '0';
		if (j <= len2)
			sum += n2[len2 - j] - '0';
		sum += carry;
		carry = sum >= 10;
		r[i] = sum % 10 + '0';
		sum = 0;
	}
	if (carry && i == size_r - 1)
		return (0);
	if (carry)
	{
		r[i++] = carry + '0';
		carry = 0;
	}
	r[i] = '\0';
	while (i-- > 0)
	{
		char tmp = r[j];

		r[j++] = r[i];
		r[i] = tmp;
	}
	return (r);
}


