#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter two numbers: ");
	float a, b;
	scanf("%f %f", &a, &b);
	
	float s;
	s = a*b;
	printf("%0.2f", s);
	return 0;
}