#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter number: ");
	float r;
	scanf("%f", &r);
	
	float Pi;
	Pi = 3.1415;
	
	float v;
	v = Pi*r*r*r*0.75;
	
	float s;
	s = 4*Pi*r*r;
	
	printf("v= ,%f", v);
	printf("s= ,%f", s);
	return 0;
}