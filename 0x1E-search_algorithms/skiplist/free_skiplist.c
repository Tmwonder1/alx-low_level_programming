#include "../search_algos.h"
#include <stdlib.h>

/**
 * free_skiplist - Frees a singly linked list with an express lane
 * @list: Pointer to the head of the skip list
 */
void free_skiplist(skiplist_t *list)
{
    skiplist_t *temp;

    while (list)
    {
        temp = list->next;
        free(list);
        list = temp;
    }
}
