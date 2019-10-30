#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter number -> ");
	int a;
	scanf("%i", &a);
	
	float r;
	float sum = 0;
	
	for (float i = 1; i <= a; i++) {
		r = 1 / i;
		sum += r;
	}
	printf("%f",sum);
	
	return 0;
}