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
    unsigned int nb;

    if (n < 0)
    {
        _putchar('-');
        nb = -n;
    }
    else
    {
        nb = n;
    }

    unsigned int divisor = 1;
    while (nb / divisor > 9)
        divisor *= 10;

    while (divisor != 0)
    {
        int digit = nb / divisor;
        _putchar(digit + '0');
        nb %= divisor;
        divisor /= 10;
    }
}

