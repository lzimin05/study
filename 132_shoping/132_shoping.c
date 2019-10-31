#include <stdio.h>

int main(int argc, char** argv) {
	
	float sum_apple; // 100 gramm
	printf("Enter cost of apples by 100 gramm -> ");
	scanf("%f", &sum_apple);
	
	printf("\n-----------------------------\n");
	printf(" Weight, gr     Cost, rouobles\n");
	
	int b = 11;
	
	for (int i = 1; i < b; i++) {
		int gr = i * 100;
		float cost = sum_apple * i;
		printf("    %4.2i          %4.2f\n", gr, cost);
	}
	return 0;
}