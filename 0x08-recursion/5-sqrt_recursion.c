#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
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
    return (sqrt_recursive(n, 1, n));
}

/**
 * sqrt_recursive - Recursively computes the natural square root of a number
 * @n: The number to compute the square root of
 * @low: The lower bound of the search range
 * @high: The upper bound of the search range
 *
 * Return: The natural square root of n,
 *         or -1 if n does not have a natural square root
 */
int sqrt_recursive(int n, int low, int high)
{
    int mid;

    if (low > high)
        return (-1);
    mid = (low + high) / 2;
    if (mid * mid == n)
        return (mid);
    else if (mid * mid > n)
        return (sqrt_recursive(n, low, mid - 1));
    else
        return (sqrt_recursive(n, mid + 1, high));
}
