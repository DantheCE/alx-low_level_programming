# 0x0C. C - More malloc, free

This folder contains solutions and exercises for the ALX Low-level programming project covering dynamic memory allocation in C, focusing on standard library functions like `malloc`, `free`, `exit`, `calloc`, and `realloc`.

## Repository Contents

| File | Description | Prototype |
| ---- | ----------- | --------- |
| `0-malloc_checked.c` | Function that allocates memory using `malloc`. Exits with status `98` if memory allocation fails. | `void *malloc_checked(unsigned int b);` |
| `1-string_nconcat.c` | Function that concatenates two strings using `n` bytes from `s2`. | `char *string_nconcat(char *s1, char *s2, unsigned int n);` |
| `2-calloc.c` | Function that allocates memory for an array using `malloc` and initializes memory to zero. | `void *_calloc(unsigned int nmemb, unsigned int size);` |
| `3-array_range.c` | Function that creates an array of integers containing values from `min` to `max`. | `int *array_range(int min, int max);` |
| `main.h` | Header file containing function prototypes. | |
| `main.c` | Main file used to test the implementations. | |

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

To compile and run file number 1 (`1-string_nconcat.c`) with `main.c`:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 1-string_nconcat.c -o 1-string_nconcat
./1-string_nconcat
```

## Notes

- All functions handle `NULL` input pointers gracefully where specified.
- Memory allocation failure handling returns `NULL` or exits with `98` as required by task constraints.
- Code adheres strictly to the Betty formatting and coding style guidelines.

## Credits

Part of the ALX Software Engineering curriculum.
