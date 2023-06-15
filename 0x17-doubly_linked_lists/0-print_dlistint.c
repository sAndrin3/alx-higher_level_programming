#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *current;
    size_t count = 0;

    if (h == NULL)
        return 0;

    current = h;
    while (current != NULL)
    {
        printf("%d\n", current->n);
        count++;
        current = current->next;
    }

    return count;
}
