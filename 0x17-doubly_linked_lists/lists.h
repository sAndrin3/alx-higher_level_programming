#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/* Structure for doubly linked list nodes */
typedef struct dlistint_s
{
    int n;                        /* Data stored in the node */
    struct dlistint_s *prev;      /* Pointer to the previous node */
    struct dlistint_s *next;      /* Pointer to the next node */
} dlistint_t;

/* Function prototype */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
