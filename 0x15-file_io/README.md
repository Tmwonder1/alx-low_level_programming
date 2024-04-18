# 0x15-file_io

## Project Overview
This project explores file input/output operations in C. Students will learn to read from and write to files using system calls and understand the implications of using these over standard library functions.

## Learning Objectives
- Learn how to open, read, write, and close files using system calls.
- Understand the difference between system calls and library functions.
- Explore error handling associated with file I/O operations.

## Requirements
- Compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code must adhere to the Betty style.
- No use of global variables.
- Minimal use of libraries; focus on direct system call usage (`open`, `read`, `write`, `close`).

## Tasks
### Task 0: Tread lightly, she is near
Write a function that reads a text file and prints it to the POSIX standard output.

### Task 1: Under the snow
Create a function that creates a file and writes a given string to it.

### Task 2: Speak gently, she can hear
Write a function that appends text at the end of a file.

### Task 3: cp
Write a program that copies the contents of a file to another file.

### Task 4: elf
Write a program that displays the information contained in the ELF header at the start of an ELF file.

## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_filename]
