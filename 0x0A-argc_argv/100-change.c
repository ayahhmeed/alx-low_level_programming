#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command line arguments passed
 * @argv: Array of command line arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
  int num, j, result;
  int coins[] = {25, 10, 5, 2, 1};

  if (argc != 2)
  {
    printf("Error\n");
    return 1;
  }

  num = atoi(argv[1]);
  result = 0;

  if (num < 0)
  {
    printf("0\n");
    return 0;
  }

  for (j = 0; j < 5 && num >= 0; j++)
  {
    while (num >= coins[j])
    {
      result++;
      num -= coins[j];
    }
  }

  printf("%d\n", result);
  return 0;
}

/*
  Function: main
  Description: This program takes in a single command line argument representing an amount of money and prints the minimum number of coins needed to make change for that amount.
  Parameters:
    argc - an integer representing the number of command line arguments passed to the program
    argv - an array of strings representing the command line arguments passed to the program
  Return: an integer indicating whether the program completed successfully or not
*/


