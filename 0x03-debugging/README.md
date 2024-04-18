# 0x03-debugging

## Project Overview
This project introduces and reinforces debugging techniques in the C programming language. Students will learn to identify and resolve bugs in software, enhancing their problem-solving skills and understanding of the C language.

## Learning Objectives
- Understand common methods of debugging in C.
- Learn to identify and fix errors in C programs.
- Use debugging tools like `gcc` flags, `gdb`, or other debuggers.
- Develop a systematic approach to track down issues in code.

## Requirements
- All files must compile on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code must conform to the Betty style.
- Avoid introducing new bugs while fixing existing ones.

## Tasks
### Task 0: Multiple mains
- Provide a test main file designed to test that a function causing an output goes into an infinite loop.

### Task 1: Like, comment, subscribe
- Comment out (don’t delete) the part of the code that is causing the output to go into an infinite loop.

### Task 2: 0 > 972?
- Fix the code in `2-largest_number.c` so that it correctly prints out the largest of three numbers, no matter the case.

### Task 3: Leap year
- Fix the `3-print_remaining_days.c` function so that it correctly prints the remaining days for all dates and all leap years.

## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o [output_filename]
