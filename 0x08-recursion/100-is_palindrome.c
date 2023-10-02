#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome recursively
 * @s: The string to check
 * @i: The start index of the string
 * @j: The end index of the string
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s, int i, int j)
{
    if (i >= j)
        return (1);
    if (s[i] != s[j])
        return (0);
    
    return (is_palindrome(s, i + 1, j - 1));
}

/**
 * _strlen - Calculates the length of a string recursively
 * @s: The string to calculate the length of
 * Return: The length of the string
 */
int _strlen(char *s)
{
    if (*s == '\0')
        return (0);
    
    return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);

    return (is_palindrome(s, 0, len - 1));
}
