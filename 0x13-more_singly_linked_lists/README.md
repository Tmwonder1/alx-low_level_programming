# 0x13-more_singly_linked_lists

## Project Overview
This project builds on previous knowledge of singly linked lists, introducing more advanced techniques for managing and operating on these data structures. Students will handle more complex scenarios involving linked lists, including more dynamic operations.

## Learning Objectives
- Implement and manage singly linked lists with more advanced techniques.
- Learn operations such as insertion, deletion, and reversal of linked lists.
- Explore applications and optimizations for singly linked lists.

## Requirements
- Compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code must conform to the Betty style.
- No use of global variables.
- Minimal reliance on standard libraries.

## Tasks
### Task 0: Print list
Write a function that prints all the elements of a `listint_t` list.

### Task 1: List length
Create a function that returns the number of elements in a linked `listint_t` list.

### Task 2: Add node
Write a function that adds a new node at the beginning of a `listint_t` list.

### Task 3: Add node at the end
Write a function that adds a new node at the end of a `listint_t` list.

### Task 4: Free list
Create a function that frees a `listint_t` list.

### Task 5: Free
Write a function that frees a `listint_t` list and sets the head to `NULL`.

### Task 6: Pop
Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data.

### Task 7: Get node at index
Write a function that returns the nth node of a `listint_t` linked list.

### Task 8: Sum list
Write a function that returns the sum of all the data (n) of a `listint_t` linked list.

### Task 9: Insert node
Write a function that inserts a new node at a given position.

### Task 10: Delete node at index
Write a function that deletes the node at index `index` of a `listint_t` linked list.

## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_filename]
