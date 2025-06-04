#include <stdio.h> 

/* id in range [0, sz-1] */ 
/* this only includes primary methods for the data structure, no memory management involved */

typedef struct {
  int *arr; 
  size_t sz; 
  size_t cap; 
} dyn_arr; 

void insert(dyn_arr *a, int elem, size_t id) {
	if (id != a->sz) {for (size_t i = a->sz; i > id; i--) {(a->arr)[i] = (a->arr)[i-1];}}
	(a->arr)[id] = elem;
	a->sz += 1;
}

void remove (dyn_arr *a, size_t id) {
    // can't remove from empty array
    if (a->sz == 0) return; 

	if (id != a->sz) {for (size_t i = id; i < (a->sz)-1; i++) {(a->arr)[i] = (a->arr)[i+1];}}

    a->sz -= 1;
}

size_t search(dyn_arr *a, int elem) {
    size_t id = 0;
	while ((a->arr)[id] != elem) {if (id == (a->sz)-1) {return a->sz;} id++;}
	return id;
}

void swap(dyn_arr *a, size_t id1, size_t id2) {int tmp = (a->arr)[id1]; (a->arr)[id1] = (a->arr)[id2]; (a->arr)[id2] = tmp;}