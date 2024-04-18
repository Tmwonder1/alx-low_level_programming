# 0x0E-structures_typedef

## Project Overview
This project is designed to introduce and deepen knowledge of structures and typedefs in C. It focuses on how to define and use structures and how typedef can simplify complexity in dealing with structures.

## Learning Objectives
- Understand and define structures (`struct`) in C.
- Learn how to use `typedef` for struct types.
- Explore practical applications of structures in data handling and storage.

## Requirements
- Compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Adherence to the Betty coding style.
- Avoid the use of global variables.
- Minimal reliance on external libraries.

## Tasks
### Task 0: Define a new type `struct dog`
Create a `struct dog` with the following elements:
- `name`: type = `char *`
- `age`: type = `float`
- `owner`: type = `char *`

### Task 1: Initialize a variable of type `struct dog`
Write a function that initialize a variable of type `struct dog`

### Task 2: Print a `struct dog`
Write a function that prints a `struct dog`. If an element of `dog` is `NULL`, print `(nil)` instead of this element. `(nil)` is printed for `name` and `owner`.

### Task 3: Define a new type `dog_t` as a new name for type `struct dog`.
Use `typedef` to create an alias `dog_t` for `struct dog`.

### Task 4: Create a dog from space
Write a function that creates a new dog, and returns a pointer to it.

### Task 5: Free dogs
Write a function that frees dogs.

## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_filename]
