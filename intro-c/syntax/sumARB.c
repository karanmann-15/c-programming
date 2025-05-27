#include <stdio.h>

/* function that takes arbitrary fixed-size array and returns sum of all elements */ 

float sumALL(float arr[], int size) {
	int i = 0;
	float sum = 0;

	while (i < size) {
      sum += arr[i];
      i++;
	}

	return sum;
}

int main() {
	float s1[5] = {2.1, 4.2, 3.3, 5.4, 6.7};
	float s2[3] = {3.4, 6.3, 2.4};
	float s3[7] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};

	printf("%f\n", sumALL(s1, 5));
	printf("%f\n", sumALL(s2, 3));
	printf("%f\n", sumALL(s3, 7));

	return 0;
 }