#include <stdio.h>

int main(int argc, char** argv) {

	printf("Arithemetic mean:\n");
	
	float sum;
	float ar;
	for (int i = 1; i <= 5; i++) {
		printf("Enter number -> ");
		float a;
		scanf("%f", &a);
		
		sum = sum + a;
		ar = sum / i;
		printf("number entered %.0i: %.2f arithmetic mean %.2f\n", i, a, ar);
	
	}
	return 0;
}