#!/bin/bash

/* compile all .c files into object files*/
gcc -c *.c

/* create the static library*/
ar rc liball.a *.o

/* index the library for faster linking*/
ranlib liball.a

/* clean up the object files*/
rm *.o

