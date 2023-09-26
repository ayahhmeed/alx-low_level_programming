#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix of ints
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows or columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* Add elements of first diagonal */
		sum1 += a[i * size + i];

		/* Add elements of second diagonal */
		sum2 += a[i * size + (size - 1 - i)];
	}

	/* Print the sums */
	printf("%d, %d\n", sum1, sum2);
}
