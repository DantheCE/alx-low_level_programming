# 0x0D. C - Preprocessor

This folder contains exercises for the ALX Low-level programming project covering the C preprocessor, macros, and file inclusion.

## Repository Contents

| File | Description |
| ---- | ----------- |
| `0-object_like_macro.h` | Header file that defines a macro named `SIZE` as an abbreviation for the token `1024`. |
| `1-pi.h` | Header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`. |
| `2-main.c` | C program that prints the name of the file it was compiled from, followed by a new line. |
| `3-function_like_macro.h` | Function-like macro `ABS(x)` that computes the absolute value of a number `x`. |
| `4-sum.h` | Function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`. |

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

To compile and run file number 2 (`2-main.c`):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c -o 2-main
./2-main
```

## Credits

Part of the ALX Software Engineering curriculum.
