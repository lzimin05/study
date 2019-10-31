#include <stdio.h>

int main(int argc, char** argv) {

	printf("Arithemetic mean:\n");
	
	float sum;
	
	for (int i = 1; i <= 5; i++) {
		printf("Enter number -> ");
		float b;
		scanf("%f", &b);
		sum = sum + b;
	}
	
	float a = sum / 5;
	printf("%f", a);
	
	return 0;
}