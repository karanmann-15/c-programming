#include <stdio.h>

/* intentionally not using any other libraries except stdio.h */ 

double max(double a, double b, double c) {
	if (a >= b && a >= c) {
	   return a;
	}

	else if (b >= c) {
	   return b;
	}

	else {
	   return c;
	}
}

int is_it_even(int x) {
	if (x % 2 == 0) {
	   return 1;
	}

	else {
	   return 0;
	}
}

unsigned int factorial(unsigned int n) {
	unsigned int t = 1;

	for (int i = 2; i <= n; i++) {
       t *= i;
	}

	return t;
}

unsigned int recursive_factorial(unsigned int n) {
	if (n == 1) {
		return 1;
	}

	return n*recursive_factorial(n-1);
}

unsigned int numdigits(int n) {

	if (n < 0) {
		n = 0 - n;
	}

	unsigned int count = 0;
	
	while (n != 0) {
		count++;
		n /= 10;
	}

	return count;
}

unsigned int numdigits_method2(int n) {

	if (n < 0) {
		n = 0-n;
	}

	if (n == 0) {
		return 1;
	}
	
	unsigned int count = 0;
   unsigned int mod_10_k = 1;

    while (n >= mod_10_k) {
    	mod_10_k *= 10;
    	count++;
    }

    return count;
}


unsigned int reverse_num(unsigned int x) {
   unsigned int n = 0;
   while (x != 0) {
   	n = n * 10 + (x % 10);
   	x /= 10;
   }

   return n;
}




int main() {
	double a = 2.4, b = -3.4, c = 13.23;
	int x1 = 2, x2 = 3, x3 = -4, x4 = -3;
	unsigned int n1 = 5, n2 = 3, n3 = 13;

	printf("the maximum of 2.4, -3.4, 13.23 is: %lf \n", max(a,b,c));
	printf("2 is %d (1 for even, 0 for odd) \n", is_it_even(x1));
	printf("3 is %d (1 for even, 0 for odd) \n", is_it_even(x2));
	printf("-4 is %d (1 for even, 0 for odd) \n", is_it_even(x3));
	printf("-3 is %d (1 for even, 0 for odd) \n", is_it_even(x4));
	printf("5! = %d, 3! = %d, 13! = %d (this is out of range of an unsigned int and gives us unsigned overflow which wraps in C!) \n", factorial(n1), factorial(n2), factorial(n3));
	printf("5! = %d, 3! = %d \n", recursive_factorial(n1), recursive_factorial(n2));
	printf("12345 = %d digits, -9214 = %d digits, 12948636 = %d digits \n", numdigits(12345), numdigits(-9214), numdigits(12948636));
   printf("12345 = %d digits, -9214 = %d digits, 12948636 = %d digits \n", numdigits_method2(12345), numdigits_method2(-9214), numdigits_method2(12948636));
   printf("reverse of 123 = %d, reverse of 529501 = %d\n", reverse_num(123), reverse_num(529501));



	return 0;
}