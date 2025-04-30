#include "sets.h"

int main() {
    struct set* set = initialize_set();
    struct set* set1 = initialize_set();
    
    set_add(set, 1);
    set_add(set1,0);
    set_add(set, 3);
    set_add(set1, 5);
    set_add(set, 2);
    set_add(set1, 4);

    set_remove(set, 2);
    set_remove(set1, 4);

    set_print(set);
    set_print(set1);

    struct set* nullset = initialize_set();

    struct set* set2 = set_union(set, set1);
    set_print(set2);

    struct set* set3 = set_intersection(set, set1);
    set_print(set3);

    return 0;
}