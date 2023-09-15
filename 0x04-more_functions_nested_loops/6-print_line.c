#include "main.h"

/**
 * print_line - print straight line
 * @n: the number of line to draw
 * Return: Empty
 */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x= 1; x <= n; x++)
	_putchar(95);
	_putchar('\n');
	}
}
