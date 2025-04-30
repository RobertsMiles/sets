#include <stdlib.h>
#include <stdio.h>
#include "sets.h"

// a library for working with sets of integers
// it is a dynamically sized array, with elements kept in order
// to allow for a binary search


struct set* initialize_set() {
    struct set* set = malloc(sizeof(struct set));
    set -> arr = malloc(0);
    set -> size = 0;
    return set;
}

void set_delete(struct set* set) {
    free(set -> arr);
    free(set);
}

int index_of_n_in_arr(struct set* set, int n) {
    int min = 0;
    int max = set -> size - 1;
    int mid;

    while(min <= max) {
        mid = min + (max - min) / 2;
        if(set -> arr[mid] < n) min = mid + 1;
        else if(set -> arr[mid] > n) max = mid - 1;
        else return mid;
    }
    return -1;
}

int set_is_disjoint(struct set* set, int n) {
    if(index_of_n_in_arr(set, n) == -1)
        return 1;
    else
        return 0;
}

int sets_are_disjoint(struct set* set1, struct set* set2) {
    for(int i = 0; i < set1 -> size; i++)
        if(!set_is_disjoint(set2, set1 -> arr[i]))
            return 0;
    return 1;
}

void set_add(struct set* set, int n) {
    if(set_is_disjoint(set, n)) {
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

void set_remove(struct set* set, int n) {
    if(!set_is_disjoint(set, n)) {
        int* arr = set -> arr;

        for(int i = index_of_n_in_arr(set, n); i < set -> size - 1; i++)
            arr[i] = arr[i + 1];
        
        set -> size--;
        arr = realloc(arr, set -> size * sizeof(int));
    }
}

void set_print(struct set* set) {
    if(set -> size == 0)
        printf("NULL");
    for(int i = 0; i < set -> size; i++) {
        printf("%d ", set -> arr[i]);
    }
    printf("\n");
}

struct set* set_union(struct set* set1, struct set* set2) {
    struct set* set3 = initialize_set();

    for(int i = 0; i < set1 -> size; i++)  {
            for(int j = 0; j < set2 -> size; j++) {
                set_add(set3, set1 -> arr[i]);
                set_add(set3, set2 -> arr[j]);
        }
    }
    return set3;
}

struct set* set_intersection(struct set* set1, struct set* set2) {
    struct set* set3 = initialize_set();

    for(int i = 0; i < set1 -> size; i++)
        if(!set_is_disjoint(set2, set1 -> arr[i])) {
            printf("%d %d\n", set1 -> arr[i]);
            set_add(set3, set1 -> arr[i]);
        }
    
    return set3;
}