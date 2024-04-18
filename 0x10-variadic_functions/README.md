# 0x10-variadic_functions

## Project Overview
This project is centered on understanding and using variadic functions in C, which allow functions to accept an indefinite number of arguments. It covers the use of standard macros for handling these arguments.

## Learning Objectives
- Understand the purpose and application of variadic functions.
- Learn how to properly use `stdarg.h` for accessing a function's arguments.
- Explore practical examples of variadic functions.

## Requirements
- Compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All code must adhere to the Betty style.
- No use of global variables.
- Minimal use of standard libraries.

## Tasks
### Task 0: Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters.

### Task 1: To be is to be the value of a variable
Create a function that prints numbers, followed by a new line.

### Task 2: One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.

### Task 3: To be is a to be the value of a variable
Create a function that prints anything, with a simple selector system that chooses the right printing function based on format specifiers.

## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_filename]
