#include <stdio.h>
int main(int argc, char** argv) {
	
	float l;
	printf("parallelogram area calculations");
	printf("enter the date \n");
	printf("long (cm) -> ");
	scanf("%f",&l);
	
	float h;
	printf("height (cm) -> ");
	scanf("%f",&h);
	
	float v = l*h;
	printf("S = %.2f",v);
	
	return 0;
}