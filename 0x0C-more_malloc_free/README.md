# 0x0C-more_malloc_free

## Project Overview
This module extends the understanding and usage of dynamic memory management in C, introducing more complex scenarios and additional functions related to `malloc` and `free`.

## Learning Objectives
- Use of `malloc`, `free`, and `exit` to manage memory more effectively.
- Implementing custom dynamic memory allocation functions such as `calloc` and `realloc`.

## Requirements
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code must adhere to the Betty style.
- No use of global variables allowed.
- No forbidden standard library functions; all heap management must use `malloc` and `free`.

## Tasks
### Task 0: Trust no one
Write a function that allocates memory using `malloc`, and initializes it to zero.

### Task 1: string_nconcat
Create a function that concatenates two strings up to `n` bytes from the second string.

### Task 2: `_calloc`
Implement a simple version of `calloc` using `malloc`.

### Task 3: array_range
Create a function that creates an array of integers, ordered from `min` to `max` inclusive.

### Task 4: `_realloc`
Write a function that reallocates a memory block using `malloc` and `free`.

## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_filename]
