#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n == INT_MIN)
    {
        print_number(n / 10);
        _putchar('8');
        return;
    }

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    int rev = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    while (rev != 0)
    {
        digit = rev % 10;
        _putchar(digit + '0');
        rev /= 10;
    }
}


