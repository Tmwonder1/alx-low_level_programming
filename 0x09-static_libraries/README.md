# 0x09-static_libraries

## Project Overview
This project is designed to teach the fundamentals of creating and using static libraries in C programming. Students will learn how to compile multiple source files into a single archive and how to link with them.

## Learning Objectives
- Understand the role and benefits of static libraries.
- Learn how to create a static library and manage its contents.
- Know how to compile and link programs using static libraries.

## Requirements
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code must adhere to the Betty coding style.
- Emphasis on detailed documentation for each function in the library.

## Tasks
### Task 0: Create a static library
Create a static library called `libmy.a` from some existing object files.

### Task 1: Script to create a static library
Write a script called `create_static_lib.sh` that creates a static library from all the `.c` files in the current directory.

### Task 2: Understanding a library
Answer questions related to static libraries, including how they are used, why one might use them, and how they differ from dynamic libraries.

## How to Compile
To create object files:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
