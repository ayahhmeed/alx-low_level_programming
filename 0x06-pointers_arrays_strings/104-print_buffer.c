#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", (unsigned char)b[j]);
			else
				printf("  ");
			if (j % 2 == 1)
				printf(" ");
		}
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;
			if (b[j] >= ' ' && b[j] <= '~')
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
