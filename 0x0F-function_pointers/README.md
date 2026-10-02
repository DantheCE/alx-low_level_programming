# 0x0F. C - Function pointers

This folder contains solutions and exercises for the ALX Low-level programming project covering the use of function pointers in C.

## Repository Contents

| File | Description |
| ---- | ----------- |
| `0-print_name.c` | Function that prints a name. |
| `1-array_iterator.c` | Function that executes a function given as a parameter on each element of an array. |
| `2-int_index.c` | Function that searches for an integer. |
| `3-main.c` | Main file for the calculator program. |
| `3-op_functions.c` | Functions that perform simple operations (add, sub, mul, div, mod). |
| `3-get_op_func.c` | Function that selects the correct operation function to perform the calculation. |
| `3-calc.h` | Header file for the calculator program containing structures and prototypes. |
| `function_pointers.h` | Header file containing function prototypes for the rest of the tasks. |

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

To compile the calculator program (Task 3):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1 + 1
```

## Notes

- All implementations avoid the use of standard library functions unless explicitly permitted.
- Code follows the Betty style for clarity and consistency.

## Credits

Part of the ALX Software Engineering curriculum.

