#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	
	printf("Random number\n");
	
	time_t t;
	srand(time(&t));
	int n = 10;
	float sum;
	
	for (int i = 1; i <= n; i++) {
		int a = rand() % 10 + 1;
		printf("%i\n", a);
		sum = sum + a;
	}
	float ar = sum / n;
	printf("%f", ar);
	return 0;
}