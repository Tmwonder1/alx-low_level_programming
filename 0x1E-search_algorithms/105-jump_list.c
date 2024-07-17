#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 * 
 * Return: Pointer to the first node where value is located, or NULL if value is not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t i;
    listint_t *prev = list;
    listint_t *current = list;
    
    if (!list)
        return (NULL);

    while (current->next && current->index < size && current->n < value)
    {
        prev = current;
        for (i = 0; i < step && current->next; i++)
            current = current->next;
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }
    
    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev && prev->index <= current->index && prev->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
