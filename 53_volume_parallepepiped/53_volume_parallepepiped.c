#include <stdio.h>
int main(int argc, char** argv) {
	
	float l;
	printf("calculation of the volume parallelepiped\n");
	printf("enter the date \n");
	printf("long (cm) -> ");
	scanf("%f",&l);
	
	float s;
	printf("short (cm) -> ");
	scanf("%f",&s);
	
	float h;
	printf("height (cm) -> ");
	scanf("%f",&h);
	
	float v = l*h*s;
	printf("S = %.2f",v);
	
	return 0;
}