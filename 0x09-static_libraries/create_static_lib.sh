#!/bin/bash
# Script to populate the 0x09-static_libraries with the requested functions, compile them to relocatable objects, and package them into libmy.a

echo "Compiling .c files to .o using gcc -c..."
gcc -c -std=gnu89 *.c

echo "Creating the static library libmy.a..."
ar rcs liball.a *.o

echo "Done! The liball.a has been generated with all required relocatable object files."
