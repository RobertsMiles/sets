# info
I wanted to be able to work with sets in C, so I figured I would write my own library. This is unfinished!!

# compile
gcc -c sets.c -o sets.o
ar rcs libsets.a sets.o

# use in other program
gcc main.c -L. -lsets

# example usage
see main.c
