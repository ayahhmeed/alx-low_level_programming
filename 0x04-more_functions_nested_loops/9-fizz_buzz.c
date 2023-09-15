#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
printf(i % 3 ?
i % 5 ? "%d " : "Buzz " :
i % 5 ? "Fizz " : "FizzBuzz ");

printf("\n");
return (0);
}

