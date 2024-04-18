# 0x0B-malloc_free

## Project Overview
This project introduces the use of dynamic memory allocation in C using `malloc` and proper memory management using `free`.

## Learning Objectives
- How to use `malloc` to allocate memory dynamically.
- Proper usage of `free` to release allocated memory.
- Managing memory leaks and pointers.

## Requirements
- Compiled with `gcc` using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code should use the `Betty` style.
- No use of global variables.
- Minimal use of libraries (`stdio.h` allowed, others must be justified).

## Tasks
### Task 0: Create array
Create an array of chars and initialize it with a specific char. Return NULL if it fails.

### Task 1: Concatenate strings
Write a function that concatenates two strings and returns a pointer to the new string. Use `malloc`.

### Task 2: Allocate grid
Write a function that returns a pointer to a 2-dimensional array of integers.

### Task 3: Free grid
Write a function that frees a 2-dimensional grid previously created by your `allocate grid` function.

### Task 4: Concatenate all arguments
Create a function that concatenates all the arguments of your program.

## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o

