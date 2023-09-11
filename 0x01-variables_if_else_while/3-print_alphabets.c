#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char ch = 'a';
char CH = 'A';

/*print a - z*/
while (ch <= 'z')
{
putchar(CH);
ch++;
}
putchar('\n');
return (0);
}
