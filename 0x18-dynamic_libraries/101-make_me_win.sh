#!/bin/bash

echo "void srand(unsigned int seed) {}" > fake_rand.c
echo "int rand(void) { return $(( $1 )); }" >> fake_rand.c
gcc -shared -o fake_rand.so -fPIC fake_rand.c

export LD_PRELOAD=./fake_rand.so
