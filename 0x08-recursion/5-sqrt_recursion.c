#include "main.h"

/**
 * _sqrt_recursion - Recursively computes the natural square root of a number
 * @n: The number to compute the square root of
 *
 * Return: The natural square root of n,
 *         or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0 || n == 1)
        return (n);
    return (sqrt_helper(n, n/2));
}

/**
 * sqrt_helper - Computes the natural square root of a number recursively
 * @n: The number to compute the square root of
 * @i: The potential root to check
 *
 * Return: The natural square root of n,
 *         or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
    if (i <= 0)
        return (-1);
    if (i * i == n)
        return (i);
    return (sqrt_helper(n, i - 1));
}
