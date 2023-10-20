#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 *
 * @h: list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
        count++;
        h = h->next;
    }

    return (count);
}

