#include "main.h"
#include <unistd.h>

/**
 * _puts - Print a string to stdout.
 * @s: The string to print.
 */
void _puts(char *s)
{
    while (*s != '\0')
    {
        write(1, s, 1);
        s++;
    }
    write(1, "\n", 1);
}
