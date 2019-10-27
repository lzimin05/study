#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter number: ");
	float r;
	scanf("%f", &r);
	
	float Pi;
	Pi = 3.1415;
	
	float s;
	s = Pi * r*r;
	printf("%f", s);
	return 0;
}