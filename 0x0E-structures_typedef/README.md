# 0x06. More pointers, arrays and strings

This folder contains solutions and exercises for the ALX Low-level programming project covering the use of structs and typedef.

## Repository Contents

| File | Description |
| ---- | ----------- |
| `1-init_dog.c` | Function that initializes a variable of type struct, dog. |
| `2-print_dog.c` | Function that prints a struct, dog. |
| `4-new_dog,c` | Function that creates a new dog struct using provided arguments. |
| `5-free_dog.c` | Function that frees memory containing our dog struct. |
| `dog.h` | Header file containing function prototypes and implementation of dog struct. |
| `main.c` | Main files for testing. |

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

To compile a specific task with a main file (e.g., `5-free_dog.c`):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 5-free.c -o 5-free
./5-free
```

## Notes

- All implementations avoid the use of standard library functions unless explicitly permitted. The functions allowed in this module are printf, malloc, free and exit.
- Code follows the Betty style for clarity and consistency.

## Credits

Part of the ALX Software Engineering curriculum.
