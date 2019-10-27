#include <stdio.h>
int main(int argc, char** argv) {
	
	float l;
	printf("calculating the surface area of the parallelepiped\n");
	printf("enter the date \n");
	printf("long (cm) -> ");
	scanf("%f",&l);
	
	float s;
	printf("short (cm) -> ");
	scanf("%f",&s);
	
	float h;
	printf("height (cm) -> ");
	scanf("%f",&h);
	
	float v = 2*(l*s+l*h+h*s);
	printf("S = %.2f",v);
	
	return 0;
}