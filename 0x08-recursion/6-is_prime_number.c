#include "main.h"

/**
 * is_prime - Checks if a number is prime recursively
 * @n: The number to check
 * @i: The current divisor to check
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime(int n, int i)
{
if (n <= 2)
return (n == 2);
if (n % i == 0)
return (0);
if (i * i > n)
return (1);
return (is_prime(n, i + 1));
}
/**
 * is_prime_number - Checks if an input integer is prime
 * @n: The number to check
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime(n, 2));
}
