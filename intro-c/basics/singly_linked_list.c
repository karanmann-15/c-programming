#include <stdio.h> 

struct node {
	void *val; // could also be a specific data type and not a pointer to that data type
	struct node *nxt;
};

struct ls {
   struct node *head;
};