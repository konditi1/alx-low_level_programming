#!/bin/bash

# Compile all .c files into position-independent object files
gcc -c -Wall -Werror -fpic *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up temporary object files
rm *.o
