# 0x0A. C - argc, argv

This project introduces dynamic memory allocation in C, focusing on using `malloc` and `free` functions from the C standard library `stdlib`.

## Files

Each file in this repository corresponds to a specific task:

### [0=create_array.c](0-create_array.c)
A program that creates a char array using malloc and initializes it with a given character.
* Prototype: `char *create_array(unsigned int size, char c);`

### [1-strdup.c](1-strdup.c)
A program that creates a copy of a given string in an initialized memory location
* Prototype: `char *_strdup(char *str);`

### [2-str_concat.c](2-str_concat.c)
A program that concatenates two strings in an initialized memory location
* Prototype: `char *str_concat(char *s1, char *s2);`

### [main.c](main.c)
The main entry point file used to test the implementations of the helper functions declared in `main.h`.

### [main.h](main.h)
The header file containing prototypes for all the functions.
