#include <stdio.h>

int main() {
	char a = 127, b = 1;
	char c = a + b;
	int d = (int)a + (int)b;


	printf("%d\n", c); //
	printf("%d\n", d);
    
    return 0;
}