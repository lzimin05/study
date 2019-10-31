#include <stdio.h>

int main(int argc, char** argv) {

	printf("Arithemetic mean:\n");
	
	printf("Step ->");
	int a;
	scanf("%i", &a);
	
	float sum;
	
	for (int i = 1; i <= a; i++) {
		printf("Enter number -> ");
		float b;
		scanf("%f", &b);
		sum = sum + b;
	}
	
	float ce = sum / a;
	printf("%f", ce);
	
	return 0;
}