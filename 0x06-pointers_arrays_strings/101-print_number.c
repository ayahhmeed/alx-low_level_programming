#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
int n_copy = n;
int num_digits = 0;
int divisor = 1;

while (n_copy != 0)
{
num_digits++;
n_copy /= 10;
}

if (n < 0)
{
_putchar('-');
n = -n;
}

for (int i = 1; i < num_digits; i++)
{
divisor *= 10;
}
{
_putchar((n / divisor)+'0');
n %= divisor;
divisor /= 10;
}

if (num_digits == 0)
{
_putchar('0');
}
}
