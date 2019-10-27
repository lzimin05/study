#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter two numbers: ");
	float a, h;
	scanf("%f %f", &a, &h);
	
	float triangle;
	triangle = a*h*0.5;
	printf("%f", triangle);
	return 0;
}