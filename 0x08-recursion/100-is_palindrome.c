#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome using recursion.
 *
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
    int len, i;

    len = strlen(s);

    if (len <= 1)
    {
        /* If the length of the string is <= 1, it's a palindrome */
        return (1);
    }

    if (*s == s[len - 1])
    {
        /* Recursively call is_palindrome() with s+1 and len-2 to exclude the 
         * first and last characters of s */
        return (is_palindrome(s + 1) && 1);
    }
    else
    {
        /* The string is not a palindrome if the first and last characters are not equal */
        return (0);
    }
}

