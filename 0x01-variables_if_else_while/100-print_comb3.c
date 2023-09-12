#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combination of two digits.
 *
 * Return: Alwyas 0 (success)
 */

int main(void)
{
	int digit1 = 0, digit2;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			if (digit != digit2 && digit1 < digit2)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);

				if (digit1 + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;

}

