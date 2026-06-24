# 0x07. Pointers, arrays and strings

This folder contains solutions and exercises for the ALX Low-level programming project covering more advanced usage of pointers, arrays, and strings in C.

## Repository Contents

| File | Description |
| ---- | ----------- |
| `0-memset.c` | Function that fills memory with a constant byte. |
| `1-memcpy.c` | Function that copies memory area. |
| `2-strchr.c` | Function that locates a character in a string. |
| `3-strspn.c` | Function that gets the length of a prefix substring. |
| `4-strpbrk.c` | Function that searches a string for any of a set of bytes. |
| `5-strstr.c` | Function that locates a substring. |
| `7-print_chessboard.c` | Function that prints the chessboard. |
| `8-print_diagsums.c` | Function that prints the sum of the two diagonals of a square matrix of integers. |
| `_putchar.c` | Helper function for character output. |
| `main.h` | Header file containing function prototypes. |

## Build and Requirements

- **Environment:** Ubuntu 20.04 LTS
- **Compiler:** `gcc`
- **Standard:** GNU89 (C89)
- **Style:** Betty style guide

Recommended compilation flags:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Usage

To compile a specific task with a main file (e.g., `0-memset.c`):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 0-memset.c -o 0-memset
./0-memset
```

## Notes

- All implementations avoid the use of standard library functions unless explicitly permitted.
- Code follows the Betty style for clarity and consistency.

## Credits

Part of the ALX Software Engineering curriculum.

