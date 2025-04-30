struct set {
    int* arr;
    int size;
};

// initializes an empty set
struct set* initialize_set();

// frees set from memory
void set_delete(struct set* set);

// find the index of n in the array using a binary search
int index_of_n_in_arr(struct set* set, int n);

// returns 1 if n is disjoint with the set, otherwise 0
int set_is_disjoint(struct set* set, int n);

// returns 1 if set1 is disjoint with set2, otherwise 0
int sets_are_disjoint(struct set* set1, struct set* set2);

// adds value n to the set
void set_add(struct set* set, int n);

// removes value n to the set
void set_remove(struct set* set, int n);

// prints the set to stdout
void set_print(struct set* set);

// returns the union of two sets
struct set* set_union(struct set* set1, struct set* set2);

// returns the intersection between two sets
struct set* set_intersection(struct set* set1, struct set* set2);