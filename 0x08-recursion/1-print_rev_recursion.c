#include "main.h"

/**
 * _strlen_recursion - Computes the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}

/**
 * reverse - Prints a string in reverse using recursion
 * @s: The string to be printed in reverse
 * @len: The length of the string
 *
 * Return: void
 */
void reverse(char *s, int len)
{
    if (len == 0)
    {
        putchar('\n');
        return;
    }
    putchar(s[len - 1]);
    reverse(s, len - 1);
}

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
    int len = _strlen_recursion(s);

    reverse(s, len);
}
