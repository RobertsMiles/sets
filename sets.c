#include <stdbool.h>
#include <stdlib.h>

/*
// a library for creating sets in a modular system
// stores truth value of [0,mod)

// initialize an empty set
bool* initialize_set(int mod) {
    bool set[mod];
    return set;
}
*/



// a library for working with sets of integers
// it is a dynamically sized array, with elements kept in order
// to allow for a binary search

struct element {
    struct node* next;
    int val;
};

// adds value 'n' to the set
void add_to_set(int n) {

}

// removes value 'n' to the set
void remove_from_set(int n) {

}

// initializes an empty set
struct node* initialize_set() {
    struct element* head = malloc(sizeof(struct element));

}

// frees set from memory
void free_set(struct node* head) {

}

// checks if 'n' is disjoint with the set
int is_disjoint(int n, struct node* head) {

}