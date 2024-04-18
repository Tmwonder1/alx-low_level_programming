# 0x0A-argc_argv

## Project Overview
This project is part of the C programming curriculum focused on understanding and using command-line arguments (`argc` for argument count and `argv` for argument vector). It aims to deepen knowledge of how to interact with command-line inputs in C programs.

## Learning Objectives
- Understand the purpose and usage of `argc` and `argv`.
- Learn how to parse command-line arguments.
- Implement programs that utilize command-line arguments to alter their execution.

## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- No global variables are allowed.
- No more than 5 functions per file.
- The main.c file should hold only your main function.
- The main function should be commented to describe what the program does.

## Tasks
Below is a list of tasks that will be part of this project:

### Task 0: Program that prints its own name
Write a program that prints its name, followed by a new line.
- If you rename the program, it will print the new name, without having to compile it again.

### Task 1: Arguments counter
Write a program that prints the number of arguments passed into it, followed by a new line.

### Task 2: Arguments printer
Write a program that prints all arguments it receives, including the first one.
- All arguments should be printed on a new line.

### Task 3: Multiply two numbers
Write a program that multiplies two numbers passed as arguments and displays the result.
- The program should print `Error` if the number of arguments is incorrect.

### Task 4: Add numbers
Write a program that adds positive numbers and prints the result.
- Print `Error` if any number contains symbols that are not digits.
- If no number is passed to the program, print `0`.

## How to Compile
To compile the programs, you can use the following gcc command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_filename]
