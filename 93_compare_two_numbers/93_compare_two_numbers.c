#include <stdio.h>

int main(int argc, char** argv) {
	
	printf("Enter two numbers through space -> ");
	float a, b;
	scanf("%f %f", &a, &b);
	
	if (a > b) {
		printf("first number is greater than second number");
	}
	
	if (a < b) {
		printf("second number is greater than first number");
	}
	
	if (a == b) {
		printf("numbers are equal");
	}
	
	return 0;
}