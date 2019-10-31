#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	
	printf("Random number\n");
	
	time_t t;
	srand(time(&t));
	int n = 10;
	float sum1, sum2, sum3;
	
	for (int i = 1; i <= n; i++) {
		int a = rand() % 10 + 1;
		int b = rand() % 10 + 1;
		int c = rand() % 10 + 1;
		printf("%2.2i %2.2i %2.2i\n", a, b, c);
		sum1 = sum1 + a;
		sum2 += b;
		sum3 += c;
	}
	float ar1 = sum1 / n;
	float ar2 = sum2 / n; 
	float ar3 = sum3 / n;
	printf("%f\n%f\n%f", ar1, ar2, ar3);
	return 0;
}