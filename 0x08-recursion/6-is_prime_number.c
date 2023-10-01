#include "main.h"

/**
 * is_prime_number - Returns 1 if n is prime, 0 otherwise
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (check_prime(n, 2));
}

/**
 * check_prime - Recursively checks if n is prime
 * @n: The number to check
 * @i: The potential factor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
    if (i == n)
        return (1);
    if (n % i == 0)
        return (0);
    return (check_prime(n, i + 1));
}
