# 0x07-pointers_arrays_strings

ALX Low-level programming project — exercises covering pointers, arrays and strings in C.

This repository contains small implementations and exercises (standard library-like functions and array/string utilities) used for learning and testing low-level C programming concepts.

## Repository Contents

- `_putchar.c` — low-level character output helper.
- `0-memset.c` — implementation of `memset`-like behavior.
- `1-memcpy.c` — implementation of `memcpy`-like behavior.
- `2-strchr.c` — implementation of `strchr`.
- `3-strpbrk.c` — implementation of `strpbrk`.
- `3-strspn.c` — implementation of `strspn`.
- `5-strstr.c` — implementation of `strstr`.
- `7-print_chessboard.c` — prints a chessboard representation.
- `8-print_diagsums.c` — calculates diagonal sums of a matrix.
- `main.c` — example driver(s) / demo code.
- `main.h` — function prototypes and shared headers.
- `tests/` — small test programs for several functions.

## Build

Recommended compiler flags (used during development):

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

Quick build steps:

1. Compile all source files to object files:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
```

2. Create a static library (optional):

```bash
ar -rc liball.a *.o
ranlib liball.a
```

3. Build and run the example `main` program:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c _putchar.c 7-print_chessboard.c 8-print_diagsums.c -o main
./main
```

## Running Tests

The `tests/` directory contains simple test harnesses. Compile each test against the corresponding implementation. Examples:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 tests/test_memcpy.c 1-memcpy.c -o tests/test_memcpy
./tests/test_memcpy

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 tests/test_memset.c 0-memset.c -o tests/test_memset
./tests/test_memset

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 tests/test_strchr.c 2-strchr.c -o tests/test_strchr
./tests/test_strchr
```

On Windows you can run these commands in a MinGW, MSYS2 or WSL shell with `gcc` available.

## Notes

- Code targets the GNU89/C89 compilation standard as required by the ALX exercises.
- Keep compiler flags `-Wall -Werror -Wextra -pedantic` to catch style and portability issues early.

## Contributing

If you want changes, open a PR or add tests in the `tests/` folder. Keep changes small and focused.

---

If you'd like, I can run the tests here, or tweak the README with additional examples or a Makefile.
# 0x07. Pointers, arrays and strings

This folder contains solutions and helper files for the ALX/low-level programming project
covering pointers, arrays and strings in C.

## Contents

- `_putchar.c` — helper that provides a putchar wrapper used by some exercises
- `0-memset.c` — implement `memset`
- `1-memcpy.c` — implement `memcpy`
- `2-strchr.c` — implement `strchr`
- `3-strpbrk.c` — implement `strpbrk`
- `3-strspn.c` — implement `strspn`
- `5-strstr.c` — implement `strstr`
- `7-print_chessboard.c` — print a chessboard
- `8-print_diagsums.c` — print diagonal sums of a matrix
- `main.c` — example/main driver (for manual testing)
- `main.h` — common prototypes and includes
- `tests/` — unit tests used to validate implementations

## Requirements

- A C compiler (GCC recommended)
- Build flags used in examples: `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Build / Run

Open a shell and change into this directory before running the commands below:

```bash
cd 0x07-pointers_arrays_strings
```

Compile a single exercise with the provided `main.c` (example):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-memset.c main.c -o 0-memset
./0-memset
```

If a helper like `_putchar.c` is required by your test/main, compile it together:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-memset.c _putchar.c -o 0-memset
```

## Running the included tests

Each test file in `tests/` is a small driver that can be compiled with your implementation.
Example (adjust filenames as needed):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 tests/test_memset.c 0-memset.c _putchar.c -o test_memset
./test_memset
```

Repeat for other tests (e.g., `test_memcpy.c`, `test_strchr.c`). If tests require `main.c`, include it in the compile line.

## Notes

- Keep implementations simple and match the expected function prototypes in `main.h`.
- Follow the compile flags above to catch warnings and enforce coding style used in the project.

## Contributing

If you want improvements (more examples, CI, or additional tests), open an issue or submit a pull request.

---

This README was generated to give a quick overview and usage examples for the exercises in this folder.
