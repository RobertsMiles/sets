# compile
gcc -c sets.c -o sets.o
ar rcs libsets.a sets.o

# use in other program
gcc main.c -L. -lsets.a

# example usage
see main.c