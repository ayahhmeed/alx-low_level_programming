#include "main.h"

/**
 * print_line - print straight line
 * @n: is the number of time the _character
 * should be printed
 */

void print_diagonal(int n)
{
	int lnchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchr = 1; lnchr <= n; lnchr++)
			_putchar(' ');
		_putchar('\n');
	}
}
