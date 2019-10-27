#include <stdio.h>

int main(int argc, char** argv) {

	float length;
	printf("Enter length of triangle -> ");
	scanf("%f", &length);
	
	float height;
	printf("Enter height of triangle -> ");
	scanf("%f", &height);
	
	float sum = (length * height) * 0.5f;
	printf("Summa = %.2f", sum);
	return 0;
}
	
	
	
	
	