#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Check if a string is a number
 * @str: The string to check
 * Return: 1 if the string is a number, 0 otherwise
 */

int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: Number of command line arguments passed
 * @argv: Array of command line arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (check_num(argv[count]))
		{
			sum += atoi(argv[count]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/*
  * Function: main
  * Description: This program takes in command line arguments and 
  * prints the sum of all valid numbers.
  * Parameters:
    * argc - an integer representing the number of command line 
    * arguments passed to the program
    * argv - an array of strings representing the command line 
    * arguments passed to the program
   *Return: an integer indicating whether the program 
   * completed successfully or not
*/

/*
  * Function: check_num
  * Description: Checks if a string is a valid number.
  * Parameters:
  * str - the string to check
  * Return: 1 if the string is a number, 0 otherwise
  */

