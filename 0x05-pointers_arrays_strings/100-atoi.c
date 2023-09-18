#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
unsigned int num = 0;
int sign = 1;

while (*s == ' ')
{
s++;
}
if (*s == '-' || *s == '+')
{
if (*s == '-')
{
sign = -1;
}
s++;
}

while (*s != '\0')
{
if (*s < '0' || *s > '9')
{
break;
}
if (num > (INT_MAX / 10))
{
return (sign == 1 ? INT_MAX : INT_MIN);
}
num = (num * 10) + (*s - '0');
s++;
}

return (num *sign);
}
