#include <stdio.h>
#include <string.h>

int is_palindrome(char *s, int start, int end)
{
    if (start >= end)
    {
        // If the function has reached this point, the string is a palindrome
        return 1;
    }

    if (s[start] != s[end])
    {
        // If the first and last characters don't match, the string is not a palindrome
        return 0;
    }

    // Recursively check if the substring between the first and last characters is a palindrome
    return is_palindrome(s, start + 1, end - 1);


