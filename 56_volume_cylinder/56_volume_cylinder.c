#include <stdio.h>
int main(int argc, char** argv) {
	
	float r;
	printf("calculating the surface area of the parallelepiped\n");
	printf("enter the date \n");
	printf("radius (cm) -> ");
	scanf("%f",&r);
	
	float h;
	printf("height (cm) -> ");
	scanf("%f",&h);
	
	float Pi = 3.1415;
	
	float v = 	Pi*r*r*h;	
	printf("V = %.2f",v);
	
	return 0;
}
	