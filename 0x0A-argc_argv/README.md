# 0x0A. C - argc, argv

This project introduces command-line arguments in C, focusing on using `argc` and `argv` parameters in the `main` function.

## Files

Each file in this repository corresponds to a specific task:

### [0-whatsmyname.c](0-whatsmyname.c)
A program that prints its own name, followed by a new line. If you rename the program, it will print the new name.
* Prototype: `void print_program_name(int argc, char *argv[]);`

### [1-args.c](1-args.c)
A program that prints the number of arguments passed into it.
* Prototype: `void print_number_of_args(int argc, char *argv[]);`

### [2-args.c](2-args.c)
A program that prints all arguments it receives, one per line.
* Prototype: `void print_all_args(int argc, char *argv[]);`

### [3-mul.c](3-mul.c)
A program that multiplies two numbers and prints the result.
* Prototype: `int multiply_two_numbers(int argc, char *argv[]);`

### [main.c](main.c)
The main entry point file used to test the implementations of the helper functions declared in `main.h`.

### [main.h](main.h)
The header file containing prototypes for all the functions.
