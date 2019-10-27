#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter two numbers(the length of the base): ");
	float a, b;
	scanf("%f %f", &a, &b);
	
	printf("enter the height");
	float h;
	scanf("%f", &h);
	
	float s;
	s = (a+b)/2*h;
	printf("%f", s);
	return 0;
}
	
	