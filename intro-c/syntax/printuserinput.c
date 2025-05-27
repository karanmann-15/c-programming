#include <stdio.h>

int main() {
	
	char name[20];
	printf("Enter your first name: (less than 19 characters!) ");
	scanf("%s", name);

    printf("%s\n", name);
	return 0;
}