#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: The encoded string.
 */
char *leet(char *str)
{
int i, j;
char *letters = "aAeEoOtTlL";
char *nums = "4433007711";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (letters[j] != '\0')
{
if (str[i] == letters[j])
{
str[i] = nums[j];
break;
}

j++;
}

i++;
}

return (str);
}
