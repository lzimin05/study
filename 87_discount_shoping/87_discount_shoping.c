#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Calculate cost of purchase:\n");
	printf("cost of purchase -> ");
	float sum;
	scanf("%f", &sum);
	
	if (sum > 1000) {
		sum = sum * 0.9f;
	}
	printf("Cost of purchase = %f", sum);
	
	return 0;
}