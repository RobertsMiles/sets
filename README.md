compile:
gcc -c sets.c -o sets.o
ar rcs libsets.a sets.o

use with other program:
gcc main.c -L. -lsets.a