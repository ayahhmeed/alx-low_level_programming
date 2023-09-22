#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string in rot13.
 * @str: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *rot13(char *str)
{
int i, j;
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (input[j] != '\0')
{
if (str[i] == input[j])
			{
str[i] = output[j];
break;
}
j++;
}

i++;
}

return (str);
}
