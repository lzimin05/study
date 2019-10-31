#include <stdio.h>
#include <limits.h>

int main(int argc, char** argv) {

	printf("Arithemetic mean:\n");
	
	printf("Step -> ");
	int a;
	scanf("%i", &a);
	
	float sum;
	float min = INT_MAX;
	float max = INT_MIN;
	
	for (int i = 1; i <= a; i++) {
		printf("Enter number -> ");
		float b;
		scanf("%f", &b);
		sum = sum + b;
		if (b < min) {
			min = b;		
		}
		if (b > max) {
			max = b;
		}
	}
	float ce = sum / a;
	
	printf("Kol - vo number: %.2i", a);
	printf("\nArthmetic mean: %.2f", ce);
	printf("\nmin number: %.2f", min);
	printf("\nmax number: %.2f", max);
	
	return 0;
}