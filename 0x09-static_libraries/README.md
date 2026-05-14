# 0x09. C - Static libraries

This folder contains solutions and exercises for the ALX Low-level programming project covering the concepts of Static Libraries in C. A static library is a collection of object files that are linked into the program during the linking phase of compilation.

## Learning Objectives

- What is a static library, how does it work, how to create one and how to use it
- The basic tools used to create and manage static libraries (`ar`, `ranlib`, `nm`)

## Repository Contents

| File | Description |
| ---- | ----------- |
| `0-isupper.c` | Function that checks for uppercase character. |
| `0-memset.c` | Function that fills memory with a constant byte. |
| `0-strcat.c` | Function that concatenates two strings. |
| `1-isdigit.c` | Function that checks for a digit (0 through 9). |
| `1-memcpy.c` | Function that copies memory area. |
| `1-strncat.c` | Function that concatenates two strings up to n bytes. |
| `2-strchr.c` | Function that locates a character in a string. |
| `2-strlen.c` | Function that returns the length of a string. |
| `2-strncpy.c` | Function that copies a string. |
| `3-islower.c` | Function that checks for lowercase character. |
| `3-puts.c` | Function that prints a string, followed by a new line, to stdout. |
| `3-strcmp.c` | Function that compares two strings. |
| `3-strspn.c` | Function that gets the length of a prefix substring. |
| `4-isalpha.c` | Function that checks for alphabetic character. |
| `4-strpbrk.c` | Function that searches a string for any of a set of bytes. |
| `5-strstr.c` | Function that locates a substring. |
| `6-abs.c` | Function that computes the absolute value of an integer. |
| `9-strcpy.c` | Function that copies the string pointed to by `src`, including the terminating null byte, to the buffer pointed to by `dest`. |
| `_putchar.c` | Helper function for character output. |
| `main.h` | Header file containing function prototypes. |
| `create_static_lib.sh` | Shell script that creates the library `libmy.a` from all `.c` files in the directory. |

## Build and Requirements

- **Environment:** Ubuntu 20.04 LTS
- **Compiler:** `gcc`
- **Standard:** GNU89 (C89)
- **Style:** Betty style guide

Recommended compilation flags for compiling individual object files:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
```

## Creating the Static Library

You can create the static library `libmy.a` using the `ar` tool:

```bash
ar rcs libmy.a *.o
```

- `r`: Inserts the files into the archive (replacing existing ones).
- `c`: Creates the archive if it does not exist.
- `s`: Creates an object-file index (equivalent to `ranlib`).

Alternatively, you can run the helper script provided in this folder:

```bash
./create_static_lib.sh
```

## Usage

To compile your program using the static library, use the `-L` flag to specify the library directory path and the `-l` flag followed by the library name (without the `lib` prefix and `.a` extension):

```bash
gcc -std=gnu89 main.c -L. -lmy -o my_program
./my_program
```

## Notes

- Static libraries make compilation faster and prevent needing to re-compile the source library files every time you recompile your application.
- Ensure that object files are compiled using the `-c` flag before adding them to an archive, as adding fully-linked executables will cause linkage failures.

## Credits

Part of the ALX Software Engineering curriculum.
