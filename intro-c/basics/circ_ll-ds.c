#include <stdio.h>

typedef struct nd {
	int val; 
	struct nd* next;
} nd; 

typedef struct {
	nd* head;
} circ_ll;