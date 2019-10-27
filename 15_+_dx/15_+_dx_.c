#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter two numbers: ");
	float x, dx;
	scanf("%f %f", &x, &dx);
	
	x += dx;
	printf("%0.2f", x);
	return 0;
}