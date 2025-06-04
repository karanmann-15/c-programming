#include <stdio.h>
#include <stdlib.h>

int *arr = (int*)malloc(4*sizeof(int));
free(arr);