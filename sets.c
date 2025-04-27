#include <stdlib.h>

// a library for working with sets of integers
// it is a dynamically sized array, with elements kept in order
// to allow for a binary search

struct set {
    int* arr;
    int size;
};

// initializes an empty set
struct set* initialize_set() {
    struct set* set = malloc(sizeof(struct set));
    set -> arr = malloc(0);
    set -> size = 0;
    return set;
}

// frees set from memory
void free_set(struct set* set) {

}

// adds value n to the set
// if n is already in the set, nothing is done
void add_to_set(struct set* set, int n) {
    // if n is disjoint with set 
    set -> size++;
    set -> arr = realloc(set -> arr, set -> size * sizeof(int));
    set -> arr[set -> size - 1] = n;
}

// removes value n to the set
// if n is not in the set, nothing is done
void remove_from_set(struct set* set, int n) {

}

// returns 1 if n is disjoint with the set, otherwise 0
int is_disjoint(struct set* set, int n) {
    return -1;
}

int main() {
    #include <stdio.h>
    struct set* set = initialize_set();

    add_to_set(set,5);
    add_to_set(set, 3);

    printf("%d %d\n", set -> arr[0], set -> arr[1]);

    return 0;
}