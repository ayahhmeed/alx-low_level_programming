#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int num = 612852475143;
long int divisor = 2;
long int largest_factor = 0;

while (num != 0)
{
if (num % divisor != 0)
{
divisor++;
}
else
{
largest_factor = num;
num /= divisor;

if (num == 1)
{
printf("%ld\n", largest_factor);
break;
}
}
}

return (0);
}
