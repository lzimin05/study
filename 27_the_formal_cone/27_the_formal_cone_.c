#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter radius cylinder: ");
	float r;
	scanf("%f", &r);
	
	float Pi;
	Pi = 3.1415;
	
	printf("enter the height: ");
	float h;
	scanf("%f", &h);
	
	float s;
	s = Pi*r*r*h*1/3;
	printf("s= %f", s);
	return 0;
}