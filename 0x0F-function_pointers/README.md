# 0x0F-function_pointers

## Project Overview
This project explores the use and implementation of function pointers in C. It aims to demonstrate how function pointers can be used to achieve dynamic function invocation and to handle higher-order functions.

## Learning Objectives
- Understand what function pointers are and how to use them.
- Learn to declare, initialize, and use function pointers.
- Explore practical scenarios where function pointers are useful, such as implementing callbacks and event-driven programming.

## Requirements
- Compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All code must adhere to the Betty style.
- Avoid global variables as much as possible.
- Use of the standard library is allowed but should be justified.

## Tasks
### Task 0: Print a name
Write a function that prints a name using a function pointer to determine the printing format.

### Task 1: Execute a function given as a parameter on each element of an array.
Create a function that executes another function given as a parameter on each element of an array.

### Task 2: Search for an integer
Write a function that searches for an integer in an array using a comparison function, which is passed as a parameter.

### Task 3: Perform simple operations
Implement three functions: add, subtract, and multiply. Then write a function that selects the correct function to perform based on a character passed as a parameter.

### Task 4: Program that performs simple operations
Write a program that takes an operator and two integers as arguments and performs simple arithmetic operations based on the operator.

## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_filename]
