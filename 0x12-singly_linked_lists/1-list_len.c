#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current;

for (current = h; current != NULL; current = current->next)
count++;
return (count);
}
