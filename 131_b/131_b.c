#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	
	printf("Random number\n");
	
	time_t t;
	srand(time(&t));
	int n, k;
	printf("Enter number of sequences -> ");
	scanf("%i %i", &n, &k);
	
	
	for (int i = 1; i <= n; i++) {
		float sum = 0;
		for (int j = 1; j <= k; j++) {
			int a = rand() % 10 + 1;
			sum = sum + a;
			printf("%2i ", a);
		}
		float ar = sum / k;
		printf("  %2.2f\n", ar);
	}
	
	return 0;
}