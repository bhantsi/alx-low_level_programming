#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

echo "Static library liball.a created."

