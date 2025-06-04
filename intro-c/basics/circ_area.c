#include <stdio.h>
#define PI 3.14

float circle_area(float r) {
     float rxr = r*r;
     float area = PI*rxr;
     return area;
}

int main() {
	float r = 16.94;

	printf("%f", circle_area(r));

	return 0;
}