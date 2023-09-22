#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5][5] = {
{ 98,  97,  36,  99,  98},
{108,  98,  35,  39,  16},
{ 36,  97,  57,  36,  57},
{48,  89,   2,  46,  75},
{ 59,  68,  17,  89,  24}
};
int (*p)[5] = a;

*(*(a + 2) + 2) = 98;

printf("a[2][2] = %d\n", a[2][2]); /* should print "a[2][2] = 98" */
printf("%p\n%p\n%p\n%p\n%p\n", &a[0], &a[1], &a[2], &a[3], &a[4]);
printf("%p\n%p\n%p\n%p\n%p\n", a, a + 1, a + 2, a + 3, a + 4);
return (0);
}

