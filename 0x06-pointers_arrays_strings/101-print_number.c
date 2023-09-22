#include "main.h"

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

if (nb / 10)
print_number(nb / 10);

_putchar(nb % 10 + '0');
}

