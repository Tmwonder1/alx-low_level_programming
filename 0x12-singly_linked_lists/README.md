# 0x12-singly_linked_lists

## Project Overview
This project introduces the concept of singly linked lists in C programming. Students will learn how to create and manage singly linked lists, including basic operations such as insertion, deletion, and traversal.

## Learning Objectives
- Understand the structure and operations of singly linked lists.
- Learn how to implement singly linked list operations in C.
- Explore practical uses of linked lists in data structures and algorithms.

## Requirements
- Compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All code must adhere to the Betty coding style.
- Avoid the use of global variables.
- Minimal use of standard libraries.

## Tasks
### Task 0: Print list
Write a function that prints all the elements of a `list_t` list and returns the number of nodes.

### Task 1: List length
Create a function that returns the number of elements in a linked `list_t` list.

### Task 2: Add node
Write a function that adds a new node at the beginning of a `list_t` list.

### Task 3: Add node at the end
Write a function that adds a new node at the end of a `list_t` list.

### Task 4: Free list
Create a function that frees a `list_t` list.

### Task 5: The Hare and the Tortoise
Write a function that finds a loop in a linked list.

## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_filename]
