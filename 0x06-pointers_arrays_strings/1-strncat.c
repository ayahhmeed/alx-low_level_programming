#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    int i, res = n, digit, divisor = 1;

    if (n < 0)
    {
        _putchar('-');
        res = -n;
    }

    while (res / divisor >= 10)
        divisor *= 10;

    for (i = divisor; i >= 1; i = i / 10)
    {
        digit = (res / i) % 10;
        _putchar(digit + '0');
    }
}
