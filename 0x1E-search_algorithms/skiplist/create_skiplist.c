#include "../search_algos.h"
#include <stdlib.h>
#include <math.h>

/**
 * create_skiplist - Creates a singly linked list with an express lane from an array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * 
 * Return: Pointer to the head of the skip list
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
    skiplist_t *head = NULL, *node, *temp, *express;
    size_t i, step = sqrt(size);

    if (!array || size == 0)
        return (NULL);

    for (i = 0; i < size; i++)
    {
        node = malloc(sizeof(skiplist_t));
        if (!node)
            return (NULL);
        node->n = array[i];
        node->index = i;
        node->next = NULL;
        node->express = NULL;

        if (!head)
            head = node;
        else
        {
            temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = node;
        }
    }

    temp = head;
    express = head;
    for (i = 0; temp; i++)
    {
        if (i % step == 0)
        {
            express->express = temp;
            express = temp;
        }
        temp = temp->next;
    }

    return (head);
}
