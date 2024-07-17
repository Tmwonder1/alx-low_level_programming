#include "../search_algos.h"
#include <stdio.h>

/**
 * print_skiplist - Prints the elements of a singly linked list with an express lane
 * @list: Pointer to the head of the skip list
 */
void print_skiplist(const skiplist_t *list)
{
    const skiplist_t *express = list;

    printf("List :\n");
    while (list)
    {
        printf("Index[%lu] = [%d]\n", list->index, list->n);
        list = list->next;
    }

    printf("\nExpress lane :\n");
    while (express)
    {
        printf("Index[%lu] = [%d]\n", express->index, express->n);
        express = express->express;
    }
    printf("\n");
}
