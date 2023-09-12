#include <stio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Return: Alwyas 0 (success)
 */

int main(void)

{
int d, p, q;

for (d = '0'; d < '9'; d++)
{

for (p = d + 1; p <= '9'; p++)
{
for (q = p + 1; q <= '9'; q++)
{
if ((p != d) != q)
{
putchar(d);
putchar(p);
putchar(q);
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}


