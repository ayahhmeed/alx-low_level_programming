#include "main.h"

/**
 * wildcmp - Compares two strings including wildcard characters
 * @s1: The first string to compare
 * @s2: The second string to compare (may contain wildcards)
 *
 * Return: 1 if s1 and s2 can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '\0')
        return (*s1 == '\0');
    if (*s2 == '*')
        return (wildcmp(s1, s2+1) || (*s1 != '\0' && wildcmp(s1+1, s2)));
    if (*s1 == *s2)
        return (wildcmp(s1+1, s2+1));
    return (0);
}
