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
  if (n < 0) {
    _putchar('-');
    n *= -1;
  }

  int copy = n;
  int count = 0;

  while (copy != 0) {
    copy /= 10;
    count++;
  }

  if (count == 0)
    _putchar('0');

  int divisor = 1;
  while (count > 1) {
    divisor *= 10;
    count--;
  }

  while (divisor >= 1) {
    int digit = n / divisor;
    _putchar(digit + '0');
    n %= divisor;
    divisor /= 10;
  }
}
