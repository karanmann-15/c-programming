#include <stdio.h>

float sum2num(float a, float b) {
	return a + b;
}

float sumKnum(float ls[5]) {
	int arr_size = 5;
	int i = 0;
	float sum = 0;

	while (i < arr_size) {
       sum += ls[i];
       i++;
	}

	return sum;
}

int main() {
	
	float otpt1, otpt2, otpt3;
	float a = 2.4, b = 3.7;
	float arr1[5] = {1.9, 2.4, 0.5, 6.2, -4.5};
	float arr2[7] = {1, 2, 3, 4, 5, 6, 7}; 
 
	otpt1 = sum2num(a,b);
	otpt2 = sumKnum(arr1);
	otpt3 = sumKnum(arr2); // since arr2 has 7 elements and sumKnum is designed for 5, we only print the first 5

	printf("a+b = %f\nsum of length 5 array = %f\nsum of length 7 array = %f\n", otpt1, otpt2, otpt3);
    
    return 0;
}