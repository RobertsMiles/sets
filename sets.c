#include <stdlib.h>
#include <stdio.h>

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

// returns 1 if set1 is disjoint with set2, otherwise 0
int is_disjoint_set(struct set* set1, struct set* set2) {
    return 1;
}

// returns 1 if n is disjoint with the set, otherwise 0
int is_disjoint_int(struct set* set, int n) {
    return 1;
    /*
    int min = 0;
    int max = set -> size - 1;

    while(min < max) {
        int mid = (min + max) / 2;

        // mid is n
        // so n is already in the set
        if(set -> arr[mid] == n) {
            return -1;
        }
        else if(set -> arr[mid] < n) { // mid is less than n
            min = mid + 1;
        }
        else if(set -> arr[mid] > n) { // mid is greater than n
            max = mid - 1;
        }

        // mid is greater than n
    }
    return -1;
    */
}

// adds value n to the set
// if n is already in the set, nothing is done
void add_to_set(struct set* set, int n) {
    if(is_disjoint_int(set, n)) {
        // increase size of set by 1
        set -> size++;
        set -> arr = realloc(set -> arr, set -> size * sizeof(int));

        // insert n in an ordered manner
        int i = set -> size - 1;
        while(set -> arr[i - 1] > n) {
            set -> arr[i] = set -> arr[i - 1];
            i--;
        }
        set -> arr[i] = n;
    }
}

// removes value n to the set
// if n is not in the set, nothing is done
void remove_from_set(struct set* set, int n) {
    if(is_disjoint_int(set, n)) {
        
    }
}

void print_set(struct set* set) {
    for(int i = 0; i < set -> size; i++) {
        printf("%d ", set -> arr[i]);
    }
    printf("\n");
}

int main() {
    struct set* set = initialize_set();
    
    add_to_set(set, 1);
    add_to_set(set,0);
    add_to_set(set, 3);
    add_to_set(set, 5);
    add_to_set(set, 2);
    add_to_set(set, 4);

    print_set(set);

    return 0;
}