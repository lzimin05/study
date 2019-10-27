#include <stdio.h>
int main(int argc, char** argv) {
	
	printf("enter radius cylinder: ");
	float r1;
	scanf("%f", &r1);
	
	float Pi;
	Pi = 3.1415;
	
	printf("enter the height: ");
	float h;
	scanf("%f", &h);
	
	printf("enter radius hollow cylinder: ");
	float r2;
	scanf("%f", &r2);
	
	float v;
	v = Pi*h*(r1*r2-r2*r2);
	printf("the volume hollow cylinder %f", v);
	return 0;
}