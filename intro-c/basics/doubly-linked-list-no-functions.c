#include <stdio.h>

typedef struct nd {
	int val; 
	nd *nxt;
	nd *bf;
} nd; 

typedef struct {
  nd *head; 
  nd *tail;
} dll; 