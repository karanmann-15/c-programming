#include <stdio.h>

void swap(int *a, int *b) {
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

int main() {
	int a = 10, b = 20;
	int *pa = &a, *pb = &b;

	printf("a = %d, b = %d\n", a, b);

	swap(pa, pb);

	printf("a = %d, b = %d", a, b);

	return 0;
}