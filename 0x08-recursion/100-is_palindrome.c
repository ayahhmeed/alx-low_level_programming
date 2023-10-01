#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);
    return check_palindrome(s, len, len - 1, 0);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
    int len = 0;
    if (s[len] == '\0')
        return (0);
    len += _strlen(s + 1);
    return (len + 1);
}

/**
 * check_palindrome - Recursive function that checks if a string is a palindrome
 * @s: The string to check
 * @len: The length of s
 * @i: The current starting index to check
 * @j: The current ending index to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int i, int j)
{
    if (i == len / 2)
        return (1);
    if (s[i] == s[j])
        return (check_palindrome(s, len, i + 1, j - 1));
    else
        return (0);
}
