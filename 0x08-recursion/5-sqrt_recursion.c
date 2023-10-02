#include "main.h"

/**
 * _sqrt - Calculates the natural square root of a number recursively
 * @n: The number to calculate the square root of
 * @i: The current guess for the square root
 * Return: If the square root is found, the result. Otherwise -1.
 */
int _sqrt(int n, int i)
{
    if (i * i == n)
        return (i);
    else if (i * i > n)
        return (-1);
    
    return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 * Return: If the square root is found, the result. Otherwise -1.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    
    return (_sqrt(n, 0));
}

