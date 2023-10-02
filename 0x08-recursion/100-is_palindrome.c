#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome recursively
 * @s: The string to check
 * @start: The start index of the substring to check
 * @end: The end index of the substring to check
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s, int start, int end)
{
    /* Base case: If the substring of length 0 or 1 is a palindrome, return 1 */
    if (start >= end)
        return 1;

    /* Recursive case: If the first and last characters of the substring match 
     * and the middle substring is also a palindrome, then the entire substring is a palindrome */
    if (s[start] == s[end] && is_palindrome(s, start+1, end-1))
        return 1;

    /* If we reach here, the substring is not a palindrome */
    return 0;
}

/**
 * is_palindrome_wrapper - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_wrapper(char *s)
{
    int end = 0, start = 0;

    /* Find the length of the string */
    while (s[end] != '\0') {
        end++;
    }

    /* Decrement the end index to exclude the null terminator */
    end--;

    /* Call is_palindrome() with the start and end indices of the string */
    return is_palindrome(s, start, end);
}

/* Test the function */
int main(void)
{
    /* Test cases */
    printf("is_palindrome(\"abcddcba\") returns %d (expected 1)\n", is_palindrome_wrapper("abcddcba"));
    
    printf("is_palindrome(\"abcdcba\") returns %d (expected 1)\n", is_palindrome_wrapper("abcdcba"));
    
    printf("is_palindrome(\"I guess I thought the dream-space would be all about the visual, but it's more about the feeling. My question is what happens when you start messing with the physics of it.ti fo scisyhp eht htiw gnissem trats uoy nehw sneppah tahw si noitseuq yM .gnileef eht tuoba erom s'ti tub ,lausiv eht tuoba lla eb dluow ecaps-maerd eht thguoht I sseug I\") returns %d (expected 1)\n", is_palindrome_wrapper("I guess I thought the dream-space would be all about the visual, but it's more about the feeling. My question is what happens when you start messing with the physics of it.ti fo scisyhp eht htiw gnissem trats uoy nehw sneppah tahw si noitseuq yM .gnileef eht tuoba erom s'ti tub ,lausiv eht tuoba lla eb dluow ecaps-maerd eht thguoht I sseug I"));

    return 0;
}
