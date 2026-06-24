# 0x08. Recursion

This folder contains solutions and exercises for the ALX Low-level programming project covering the concept of recursion in C. Recursion is a programming technique where a function calls itself to solve smaller instances of a problem until a base case is reached.

## Learning Objectives

- Understand what recursion is and how to implement it
- Identify situations where recursion is appropriate
- Identify situations where recursion should **not** be used
- Understand the concept of a base case and recursive case

## Repository Contents

| File | Description |
| ---- | ----------- |
| `0-puts_recursion.c` | Function that prints a string, followed by a new line, using recursion. |
| `1-print_rev_recursion.c` | Function that prints a string in reverse. |
| `2-strlen_recursion.c` | Function that returns the length of a string. |
| `3-factorial.c` | Function that returns the factorial of a given number. |
| `4-pow_recursion.c` | Function that returns the value of x raised to the power of y. |
| `5-sqrt_recursion.c` | Function that returns the natural square root of a number. |
| `6-is_prime_number.c` | Function that returns 1 if the input integer is a prime number, otherwise return 0. |
| `100-is_palindrome.c` | Function that returns 1 if a string is a palindrome and 0 if not. |
| `_putchar.c` | Helper function for character output. |
| `main.h` | Header file containing function prototypes. |
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

To compile and run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c main.c 0-puts_recursion.c -o puts
./puts
```

Expected output:
```
Puts with recursion
```

## How It Works

The `_puts_recursion` function demonstrates a classic recursive pattern:

1. **Base case:** If the current character is the null terminator (`\0`), print a newline and return.
2. **Recursive case:** Print the current character, then call itself with a pointer to the next character (`s + 1`).

This continues until the entire string has been printed character by character.

## Notes

- All implementations avoid the use of standard library functions unless explicitly permitted.
- No loops are used — all iteration is achieved through recursive function calls.
- Code follows the Betty style for clarity and consistency.

## Credits

Part of the ALX Software Engineering curriculum.
