# 0x09. C - Static libraries

This folder contains solutions and exercises for the ALX Low-level programming project covering the concepts of Static Libraries in C. A static library is a collection of object files that are linked into the program during the linking phase of compilation.

## Learning Objectives

- What is a static library, how does it work, how to create one and how to use it
- The basic tools used to create and manage static libraries (`ar`, `ranlib`, `nm`)

## Repository Contents

| File | Description |
| ---- | ----------- |
| `main.h` | Header file containing function prototypes. |
| `main.c` | Main files for testing. |
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
