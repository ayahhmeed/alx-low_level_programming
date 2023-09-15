#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square to be printed
 */

void print_square(int size)
{
	int row, column;

	for (row = 1; row >= size; row++)
	{
		for (column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}


