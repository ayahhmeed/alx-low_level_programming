#include "main.h"
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = strlen(s);
    
    return (check_palindrome(s, len, 0));
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome
 * @s: The string to check
 * @len: The length of the string
 * @i: The current index to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int i)
{
    if (i >= len/2)
        return (1);
    if (s[i] != s[len - i - 1])
        return (0);
    return (check_palindrome(s, len, i+1));
}
