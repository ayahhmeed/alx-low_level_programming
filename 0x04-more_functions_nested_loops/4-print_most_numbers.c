#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 up to 9
 *                  : print the numbers excluding 2 and 4
 * Return: the numbers since 0 up to 9
 */

void more_numbers(void)
{

	int num;

	for (num= 0; num <= 9; x++)
	{
	if (num == 2 || num == 4)
	continue;
	else
	_putchar(num + 48);
	}
	_putchar('\n');
}
