# 0x0D-preprocessor

## Project Overview
This project aims to deepen understanding of the C preprocessor, exploring how to effectively use macros, include guards, and conditional compilation to manage complex programs.

## Learning Objectives
- Understand and use macros.
- Implement include guards in header files.
- Explore conditional compilation techniques.
- Manipulate predefined preprocessor macros.

## Requirements
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code must adhere to the Betty style.
- No use of global variables.
- Minimal use of libraries; focus is on preprocessor directives.

## Tasks
### Task 0: Object-like Macro
Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

### Task 1: Pi
Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

### Task 2: File name
Write a program that prints the name of the file it was compiled from, using the standard predefined macro `__FILE__`.

### Task 3: Function-like macro
Create a macro `ABS(x)` that computes the absolute value of a number `x`.

### Task 4: SUM
Create a macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_filename]
